#include <iostream>
using namespace std;

int main(){
    double value1;
    double value2;
    char operation;

    cout << "Enter first number: ";
    cin >> value1;
    cout << "Enter second number: ";
    cin >> value2;

    cout << "Enter operation you'd like to perform (+, -, *, /):";
    cin >> operation;

    switch(operation){
        case '+':
            cout << "Result: " << value1 + value2 << endl;
            break;
        case '-':
            cout << "Result: " << value1 - value2 << endl;
            break;
        case '*':
            cout << "Result: " << value1 * value2 << endl;
            break;
        case '/':
            if (value2 != 0) {
                cout << "Result: " << value1 / value2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
    }
}