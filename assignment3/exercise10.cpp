// Explain the primary data types in C++

#include <iostream>
using namespace std;

int main() {
    // int: Used to store whole numbers without any decimal part.
    int a = 5;
    cout << "int a = " << a << endl;

    // char: Stores a single character.
    char ch = 'a';
    cout << "char ch = " << ch << endl;

    // bool: Represents truth values either true or false.
    bool flag = true;
    cout << "bool flag = " << flag << endl;

    // float: Used for numbers that have a fractional part.
    float pi = 3.14f;
    cout << "float pi = " << pi << endl;

    // double: Similar to float but can store larger or more precise fractional numbers.
    double e = 2.718281828459;
    cout << "double e = " << e << endl;

    // void: Represents the absence of type; used in functions that do not return a value.
    // Example function definition: void functionName();
    // Note: void cannot be instantiated as a variable.
    cout << "void is used for functions that do not return a value." << endl;

    // wchar_t: Used to store wide characters, typically for characters that require more memory than char.
    wchar_t wch = L'अ';
    wcout << L"wchar_t wch = " << wch << endl;

    return 0;
}
