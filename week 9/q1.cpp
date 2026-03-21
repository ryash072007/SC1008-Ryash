#include <iostream>
#include <limits>
#include <cstring>
using namespace std;
// Function to get a valid integer input
int getValidInt() {
    // TO-DO: WRITE Your code here
    char input[50];
    int output = 0;

    while (true){
        bool a1 = false;
        cin.getline(input, 50);

        for (int i = 0; i < strlen(input); i++){
            if (input[i] == '.'){
                break;
            }
            char digit = input[i] - '0';

            if (0 <= digit && digit <= 9){
                output = output * 10 + digit;
                a1 = true;
            } else if (i == 0){
                break;
            }
        }

        if (a1){
            break;
        }

        cout << "Invalid input! Please enter an integer:\n";
    }

    return output;

}
// Function to get a valid float input
float getValidFloat() {
    // TO-DO: WRITE Your code here
    char input[50];
    float output = 0;

    while (true){
        bool a1 = false;
        float frac_size = 0;
        cin.getline(input, 50);

        for (int i = 0; i < strlen(input); i++){

            if (frac_size == 0 && input[i] == '.'){
                frac_size = 10;
                continue;
            }

            char digit = input[i] - '0';

            if (0 <= digit && digit <= 9){
                a1 = true;
                if (frac_size == 0){
                output = output * 10 + digit;}
                else {
                    output = output + digit / frac_size;
                    frac_size *= 10;
                }
            }  else if (i == 0){
                break;}
        }

        if (a1){
            break;
        }

        cout << "Invalid input! Please enter a valid float number:\n";
    }

    return output;

}
int main() {
    char name[50];  // Student name
    int studentID;  // Student ID
    float mathMark; // Math mark

    while (true) {
        // Get student name
        cout << "Enter student name (or enter '#' to exit):" << std::endl;
        cin.getline(name, 50);

        // Check if user wants to exit
        if (strcmp(name, "#") == 0) {
            break;
        }

        // Get student ID
        cout << "Enter student ID (integer):" << std::endl;
        studentID = getValidInt();

        // Get math mark
        cout << "Enter math mark (float):" << std::endl;
        mathMark = getValidFloat();

        // Display student information
        cout << "\nStudent Information:\n";
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Math Mark: " << mathMark << endl;
        cout << "-------------------------\n";
    }

    cout << "Program exited successfully." << endl;
    return 0;
}
