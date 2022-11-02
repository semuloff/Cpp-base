#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // second method to create strings.
    /*
    The length of the string must be less than the length of the array by one position, 
    since this method came from the C language, and there the last position is laid under 
    the escape-sequence "\0" the end of the string.
    */

    /*
    const int lenght = 10;
    char mas[lenght];

    cout << "Enter the something string: ";

    // "setw()" to avoid line overflow.
    cin >> setw(lenght) >> mas;
    cout << "Result: " << mas << endl;
    */

    const int max = 13;
    char mass[max];

    cout << "Enter the something string: ";

    // to save a string with spaces, use the method "cin.get(array's name, array's max lenght)"
    cin.get(mass, max);
    cout << "Result: " << mass << endl;
}