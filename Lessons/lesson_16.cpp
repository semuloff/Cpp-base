#include <iostream>

int fibonacci(int);

// functions.
int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    std::cout << "Fibonacci number under " << n << "th place: " << fibonacci(n) << std::endl;
}

int fibonacci(int n) {
    int array[n + 1];

    array[0] = 0;
    array[1] = 1;

    for (int index = 2; index < n + 1; index++) {
        array[index] = array[index - 1] + array[index - 2];
    }

    return array[n];
}