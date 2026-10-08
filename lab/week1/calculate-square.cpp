#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ifstream exerciseData("W1_ExerciseData.csv");
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