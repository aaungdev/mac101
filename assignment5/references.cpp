#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int& ref = a;  // ref is a reference to a
    ref = 20;      // changes the value of a to 20
    std::cout << "a: " << a << std::endl;  // Outputs: a: 20
    return 0;
}