#include <iostream>

using namespace std;

int main() {
    // one-dimensional arrays
    const int lenght = 10;
    int arr[lenght];

    for (int index = 0; index < lenght; index++) {
        cout << "Enter the index's value" << endl << "index: " << index << ": ";
        cin >> arr[index];
    }

    cout << "-------------------------------------------" << endl;

    for (int index = 0; index < lenght; index++) {
        cout << "index: " << index << ", value: " << arr[index] << endl;
    }
}