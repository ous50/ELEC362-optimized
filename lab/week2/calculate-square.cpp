#include <iostream>
#include <istream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

inline bool check_file_existance(const string fileName) {
    ifstream f(fileName.c_str());
    return f.good();
}


int main() {

    string dataFileName;

    try {
        cout << "Please input the name your data file to be processed below:\n";
        cin >> dataFileName;
        if (dataFileName.empty()) throw 400;
        if (!check_file_existance(dataFileName)) throw 404;
    }

    catch (int errorCode) {
        switch (errorCode) (
            case 400:
                cerr << "Bad Request: your input is invalid." << "\n";
                return errorCode;
            case 404:
                cerr << "File Not Found: the file you nominated does not exists." << "\n";
                return errorCode;
            default:
                cerr << "Undefined error occurred" << "\n";
                return errorCode;
                )
    }

    ifstream exerciseData(dataFileName);
    ofstream result("result.csv");

    if (!exerciseData || !result) {
        cerr << "Could not open the input or output file.\n";
        return 1;
    }

    result << setprecision(15); // Keep more digits when writing doubles

    string line;

    while (getline(exerciseData, line)) {
        if (line.empty()) {
            continue;
        }

        istringstream row(line);
        string time;
        string valueText;

        if (getline(row, time, ',') &&
            getline(row, valueText, ',')) {

            double value = stod(valueText);
            double square = value * value;

            result << time << ','
                << valueText << ','
                << square << '\n';
        }
    }
}