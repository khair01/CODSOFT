#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double mul(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b == 0) {
        throw runtime_error("Error: Division by zero");
    }
    return a / b;
}

int main() {
    while (true) {
        int opt;
        double a, b; 
        cout << "Enter Number 1: ";
        cin >> a;
        cout << "Enter Number 2: ";
        cin >> b;
        cout << endl;
        cout << "Choose an operation to perform:" << endl;
        cout << "1) Addition" << endl << "2) Subtraction" << endl << "3) Multiplication" << endl << "4) Division" << endl;
        cin >> opt;

        try {
            switch (opt) {
                case 1:
                    cout << "Result: " << add(a, b) << endl;
                    break;
                case 2:
                    cout << "Result: " << sub(a, b) << endl;
                    break;
                case 3:
                    cout << "Result: " << mul(a, b) << endl;
                    break;
                case 4:
                    cout << "Result: " << division(a, b) << endl;
                    break;
                default:
                    cout << "Invalid option!" << endl;
            }
        } catch (const runtime_error& e) {
            cout << e.what() << endl;
        }

        int op;
        cout << "Do you want to use the calculator again?" << endl;
        cout << "1) Yes" << endl << "2) No" << endl;
        cin >> op;
        if (op != 1) {
            break;
        }
    }

    cout << "Thank you for using the calculator!" << endl;

    return 0;
}