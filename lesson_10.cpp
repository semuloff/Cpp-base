#include <iostream>

using namespace std;

int main() {
    int number;

    // "while cycle"
    cout << "Enter the number: ";
    cin >> number;

    while (number != 0 ) {
        cout << "Entered number -> " << number << endl << endl;
        cout << "Enter the number: ";
        cin >> number;
    }

    cout << "End." << endl;

    // "do-while" cycle
    cout << "Enter the number for 'Do': ";
    cin >> number;

    do {
        cout << "Do: " << number << endl;

        cout << "Enter the number: ";
        cin >> number;
    }
    while (number!=0);
}