#include <iostream>

using namespace std;

// conditional statements.
int main() {
    int numb_1 = 5;
    int numb_2 = 6;
    
    if (numb_1 != numb_2) {
        cout << "first numb is not second numb!" << endl;
    } else {
        cout << "first numb is second numb!" << endl;
    }

    string firstName;
    string lastName;

    cout << "Enter the first name: ";
    cin >> firstName;

    cout << "Enter the last name: ";
    cin >> lastName;

    // logical operations "and" and "or".
    if (firstName == "Ellis" && lastName == "Himson") {
        cout << "Hi, Ellis Himson!" << endl;
    } else if (firstName == "Ellis" || lastName == "Himson") {
        cout << "Hi, Himson or Ellis!" << endl;
    } else {
        cout << "Bye, human!" << endl;
    }
}