// Program to print square, square root, and factorial of a number

#include <iostream>
using namespace std;

int calculateSquare(int number) {
    return number * number;
}

double calculateSquareRoot(int number) {
    double guess = number / 2.0;
    double epsilon = 0.00001;
    while ((guess * guess - number) > epsilon || (guess * guess - number) < -epsilon) {
        guess = (guess + number / guess) / 2.0;
    }
    return guess;
}

int calculateFactorial(int number) {
    int factorial = 1;
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int square = calculateSquare(number);
    double squareRoot = calculateSquareRoot(number);
    int factorial = calculateFactorial(number);

    cout << "Square of " << number << " is: " << square << endl;
    cout << "Square root of " << number << " is: " << squareRoot << endl;
    cout << "Factorial of " << number << " is: " << factorial << endl;

    return 0;
}
