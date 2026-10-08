#include <iostream>
// #include <istream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

void print_error(const std::string& message) {
    std::cerr << "\x1b[31mError: " << message << "\x1b[0m\n";
}

inline bool check_file_existence(const string fileName) {
    ifstream f(fileName.c_str());
    return f.good();
}

double string_to_double_then_calculate_square(string valueText) {
    return sqrt(stod(valueText));
}

// TODO: Get csv files within the same directory and display one item per line iteratively.
// string get_local_csv_list() {

// }

/*Get file name from user input and validate the input*/
string get_file_name(const string& presetFileName) {
    string fileName;

    cout << "Enter filename (default: " << presetFileName << "):\n";

    getline(cin, fileName);

    if (fileName.find_first_not_of(" \t\r") == string::npos) {
        return presetFileName;
    }

    if (!check_file_existence(fileName)) {
        throw 404;
    }

    return fileName;
}

/*Methods shown in week 1 lab*/
bool generate_new_file(string dataFileName) {
    ifstream exerciseData(dataFileName);
    ofstream result("result.csv");

    if (!exerciseData || !result) {
        print_error("Could not open the input or output file.\n");
        throw "Could not open the input or output file.\n";
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

            result << time << ','
                << valueText << ','
                << string_to_double_then_calculate_square(valueText) << '\n';
        }
    }

    exerciseData.close();
    result.close();
    return true;
}


int main() {

    string dataFileName = "W2_ExerciseData.csv";
    
    try {
    dataFileName = get_file_name(dataFileName);
    if(generate_new_file(dataFileName)) cout << "New csv created!\n";
    }


    catch (const int errorCode) {
        switch (errorCode) {
            case 400:
                print_error("Bad Request: your input is invalid.\n");
                return errorCode;
            case 404:
                print_error("File Not Found: the specified file does not exists.\n");
                return errorCode;
            default:
                print_error("Undefined error occurred.\n");
                return errorCode;
        }
    }

    catch (const std::string& eMessage) {
        std::cerr << "\x1b[31mError: ";
        for (char c : eMessage) cerr << c;
        std::cerr << "\x1b[0m\n";
        return 400; 
    }

    catch (...) {
        print_error("Undefined error occurred.\n");
        return 114;
    }

}

