#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

bool isZero(float num, float epsilon = 1e-6) {
    return fabs(num) < epsilon;  // Check if num is very close to 0
}

bool isInteger(float k)
{
  return std::floor(k) == k;
}

// Function to get a valid float input
float getValidFloat() {
    float value;
    while (true) {
        cin >> value;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a valid float number:" << std::endl;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}

// both int

int calculate(int value1, int value2, char op) {
    int output;
    switch (op) {
        case '+':
            output = value1 + value2;
            break;
        case '-':
            output = value1 - value2;
            break;
        case '*':
            output = value1 * value2;
            break;
        case '/':
            if (value2 == 0){
                cout << "Error: Division by zero!\n";
                output = 0;
                break;
            }
            output = value1 / value2;
            break;
    }

    return output;
}

// both float
float calculate(float value1, float value2, char op) {
    float output;
    switch (op) {
        case '+':
            output = value1 + value2;
            break;
        case '-':
            output = value1 - value2;
            break;
        case '*':
            output = value1 * value2;
            break;
        case '/':
            if (isZero(value2)){
                cout << "Error: Division by zero!\n";
                output = 0;
                break;
            }
            output = value1 / value2;
            break;
    }

    return output;
}

int main() {
    float value1, value2;
    char op;

    cout << "Enter value1:" << endl;
    value1 = getValidFloat();
    cout << "Enter value2:" << endl;
    value2 = getValidFloat();
    cout << "Enter operator:" << endl;
    cin >> op;


    if (isInteger(value1) && isInteger(value2)) {
        int ivalue1 = (int)value1;
        int ivalue2 = (int)value2;
        cout << "Result = " << calculate(ivalue1, ivalue2, op) << endl;
    } else {
        cout << "Result = " << calculate(value1, value2, op) << endl;
    }


    return 0;
}
