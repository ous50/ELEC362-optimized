#include <iostream>
#include <istream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

string getFileName(string inputIndication, string preset) {

    string dataFileName;

    try {
        string input << cin();
        if (input.empty()) throw 404;
        return input;
    }
    
    catch (int errorCode) {
        switch (errorCode) (
            case 404:
                cerr << "You have to input something!";
                break;
            default:
                cerr << "Undefined error occurred!";
                break;
            )
    }

    return "W2_ExerciseData.csv"
}


int main() {

    string dataFileName << getFileName("Please input the name your data file to be processed below:\n", )

    ifstream exerciseData("W2_ExerciseData.csv");
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