#include <iostream>

using namespace std;

// simple programm for finding the factorial
int main() {
    int n, result;
    cout << "Enter the boundary for calculation: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    cout << "Result: " << result << endl;
}