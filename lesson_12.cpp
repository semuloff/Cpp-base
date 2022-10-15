#include <iostream>
#include <string>

using namespace std;

int main() {
    // one-dimensional arrays
    const int lenght = 10;
    string arr[lenght];

    for (int index = 0; index < lenght; index++) {
        cout << "Enter the index's value" << endl << "index: " << index << ": ";
        getline(cin, arr[index]);
    
    }

    cout << "-------------------------------------------" << endl;

    for (int index = 0; index < lenght; index++) {
        cout << "index: " << index << ", value: " << arr[index] << endl;
    }
}