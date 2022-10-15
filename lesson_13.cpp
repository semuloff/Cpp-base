#include <iostream>

using namespace std;

// two-dimensional array.
int main() {
    const int lenght_rows = 3;
    const int lenght_columns = 3;
    int arrey[lenght_rows][lenght_columns];

    for (int i = 0; i < lenght_rows; i++) {
        for (int j = 0; j < lenght_columns; j++) {
            cout << "Enter the value in arrey[" << i << "][" << j << "] : ";
            cin >> arrey[i][j];
        }
    }

    cout << "Result ------------------- " << endl;
    for (int i = 0; i < lenght_rows; i++) {
        for (int j = 0; j < lenght_columns; j++) {
            cout << arrey[i][j] << " "; 
        }
        cout << endl;
    }
}