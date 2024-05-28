// Program to return the sum and product of three numbers, with an optional third parameter

#include <iostream>
using namespace std;

void calculateSumAndProduct(int a, int b, int c, int &sum, int &product) {
    sum = a + b + c;
    product = a * b * c;
}

int main() {
    int a, b, c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter third number (or press Enter to use 2): ";
    if (cin.peek() == '\n') {
        c = 2;
    } else {
        cin >> c;
    }

    int sum, product;
    calculateSumAndProduct(a, b, c, sum, product);

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}
