#include <iostream>

void editNumb(int &);
void editArray(int *);

int main() {
    int var = 10;

    // "var" variable memory address.
    std::cout << "Memory addres: " << std::endl;
    std::cout << &var << std::endl << std::endl;

    // pointer to variable type.
    int *var2;

    // equate to a pointer a reference to another variable.
    var2 = &var;

    // dereferencing a pointer.
    std::cout << "Variable: " << std::endl;
    std::cout << *var2 << std::endl;
    std::cout << var << std::endl;

    var = 15;

    // dereferencing a pointer.
    std::cout << *var2 << std::endl;
    std::cout << var << std::endl;

    std::cout << std::endl << "Memory addres: " << std::endl;
    std::cout << var2 << std::endl;
    std::cout << &var << std::endl << std::endl;

    editNumb(var);

    std::cout << "Variable after function: " << std::endl;
    std::cout << *var2 << std::endl;
    std::cout << var << std::endl << std::endl;


    int array[] = {2, 5, 3};

    std::cout << "Array's variable before function: ";
    std::cout << "[" << array[0] << ", " << array[1] << ", " << array[2] << "]" << std::endl;
    std::cout << "Memory address: " << &array << std::endl << std::endl;
    
    editArray(array);

    std::cout << "Array's variable after function: ";
    std::cout << "[" << array[0] << ", " << array[1] << ", " << array[2] << "]" << std::endl;
    std::cout << "Array's memory address: " << &array << std::endl << std::endl;

}

// passing the value of a variable with a reference to an address in memory.
void editNumb(int &number) {
    number *= 2;
    std::cout << "Array's memory address: " << &number << std::endl;
    std::cout << "Variable: " << number << std::endl << std::endl;
}

// Let's try to pass an array reference as an argument.
void editArray(int *array) {
    std::cout << "In function: " << std::endl;
    std::cout << "Array's memory address: " << array << std::endl;
    std::cout << std::endl;

    array[0] = 43;
    array[1] = 123;
    array[2] = 2324;
}   