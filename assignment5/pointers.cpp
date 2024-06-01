#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;

    // Reference example
    int& ref = a;  // ref is a reference to a
    cout << "Initial value of a: " << a << endl;  // Outputs: 10
    cout << "Initial value of ref: " << ref << endl;  // Outputs: 10
    
    ref = b;  // Changes the value of a to 20, does NOT make ref refer to b
    cout << "Value of a after ref is set to b: " << a << endl;  // Outputs: 20
    cout << "Value of ref after setting ref to b: " << ref << endl;  // Outputs: 20
    
    // Pointer example
    int* ptr = &a;  // ptr is a pointer to a
    cout << "Initial value of a: " << a << endl;  // Outputs: 20
    cout << "Initial value of *ptr: " << *ptr << endl;  // Outputs: 20
    
    ptr = &b;  // Now ptr points to b
    cout << "Value of b: " << b << endl;  // Outputs: 20
    cout << "Value of *ptr after pointing to b: " << *ptr << endl;  // Outputs: 20
    
    *ptr = 30;  // Changes the value of b to 30
    cout << "Value of b after *ptr is set to 30: " << b << endl;  // Outputs: 30
    cout << "Value of *ptr after setting to 30: " << *ptr << endl;  // Outputs: 30

    return 0;
}
