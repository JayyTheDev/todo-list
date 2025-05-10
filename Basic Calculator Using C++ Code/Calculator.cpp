#include <iostream>
#include <cmath>
using namespace std;

// === Function Definitions ===
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero." << endl;
        return 0;
    }
    return static_cast<double>(a) / b;
}

int mod(int a, int b) {
    return a % b;
}

double power(int a, int b) {
    return pow(a, b);
}

double squareRoot(int a) {
    if (a < 0) {
        cout << "Error: Negative square root." << endl;
        return 0;
    }
    return sqrt(a);
}

// === Main Program ===
int main() {
    char choice;

    do {
        int num1, num2;
        double result;
        char symbol;

        cout << "\n=== C++ Calculator ===\n";
        cout << "Supported operators: +  -  *  /  %  ^  r\n";
        cout << "Enter expression (e.g., 5 + 2 or 9 r): ";
        cin >> num1 >> symbol;

        if (symbol == 'r') {
            result = squareRoot(num1);
        } else {
            cin >> num2;

            switch (symbol) {
                case '+': result = add(num1, num2); break;
                case '-': result = subtract(num1, num2); break;
                case '*': result = multiply(num1, num2); break;
                case '/': result = divide(num1, num2); break;
                case '%': result = mod(num1, num2); break;
                case '^': result = power(num1, num2); break;
                default:
                    cout << "Invalid operator!\n";
                    continue;
            }
        }

        cout << "Result: " << result << endl;
        cout << "\nDo another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thanks for using the calculator. Goodbye!\n";
    return 0;
}
