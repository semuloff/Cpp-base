#include <iostream>

using namespace std;

int main() {
    int number = 0;
    cout << number << endl;

    // With higher priority
    ++number;
    cout << number << endl;
    --number;
    cout << number << endl;

    // With lover priority
    number++;
    cout << number << endl;
    number--;
    cout << number << endl;

    // With higher priority
    cout << ++number << endl;
    cout << --number << endl;

    // With lover priority
    cout << number++ << endl;
    cout << number << endl;
    cout << number-- << endl;
    cout << number << endl;

    // Compact view of recording operations
    number += 5;
    cout << number << endl;

    number *= 5;
    cout << number << endl;

    number /= 5;
    cout << number << endl;

    number -= 5;
    cout << number << endl;
}