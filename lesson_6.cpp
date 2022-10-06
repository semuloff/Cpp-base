#include <iostream>
#include <string>

using namespace std;


int main() {
    string str = "I_Love_C++_and_Java";

    // "length" method returns the length of a string.
    int lenght = str.length();

    // "empty" method returns "1" if string is empty, else 0.
    bool flag = str.empty();

    // "resize" method changes the length of a string.
    str.resize(25);

    // "clear" method clear a string.
    str.clear();

    cout << lenght << endl << flag << endl << str;


    string word_1 = "I just ";
    string word_2 = "wanna shine!";
    
    // words concatenation.
    string concatenation = word_1 + word_2;

    cout << concatenation << endl;

    /*
    In C++, when you enter several words separated by a space into the console, 
    only one word before the space is considered (stored). 
    This is because the >> operator treats a space as a null character.
    */
     
    string line;

    // To read a string with spaces, you need to use "getline".
    // The first argument is an operator, the second is a variable.
    getline(cin, line);

    cout << line << endl;    
}