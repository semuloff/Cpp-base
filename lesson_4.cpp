#include <iostream>

using namespace std;

int main() {
    int first_operand, second_operand;

    cout << "Enter the numbers: ";
    cin >> first_operand >> second_operand;

    // arithmetic operations
    cout << "Addition: " << first_operand + second_operand << "\n";
    cout << "Subtraction: " << first_operand - second_operand << endl;
    cout << "Multiplication: " << first_operand * second_operand << endl;
    cout << "Division: " << first_operand / second_operand << endl;
    cout << "Remainder of the division: " << first_operand % second_operand << endl;
    cout << "a * (a + b): " << first_operand * (first_operand + second_operand) << endl;
}