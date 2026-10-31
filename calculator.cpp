#include <iostream>
using namespace std;
int main() {
    int a, b, choice;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "\n--- Calculator Menu ---\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "\nResult: ";
    if (choice == 1) {
        cout << a + b << endl;
    } 
    else if (choice == 2) {
        cout << a - b << endl;
    }
    else if (choice == 3) {
        cout << a * b << endl;
    }
    else if (choice == 4) {
        if (b != 0) {
            cout << (float)a / b << endl;
        }
        else {
            cout << "Error (Division by zero!)" << endl;
        }
    }
    else {
        cout << "Invalid choice!" << endl;
    }
