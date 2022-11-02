#include <iostream>

using namespace std;


int main() {
    int number;

    cout << "Enter the number: ";
    cin >> number;

    // switch-case in action.
    switch (number) {
    case 25:
        cout << "Case - 25!" << endl;
        break;
    case 30:
        cout << "Case - 30!" << endl;
        break;
    default:
        cout << "No case!" << endl;
        break;
    }
}