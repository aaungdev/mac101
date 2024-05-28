// Calculate various values for a number greater than 25

#include <iostream>
using namespace std;

int calculateSquare(int number) {
    return number * number;
}

int calculateCube(int number) {
    return number * number * number;
}

double calculateSquareRoot(int number) {
    double guess = number / 2.0;
    double epsilon = 0.00001;
    while ((guess * guess - number) > epsilon || (guess * guess - number) < -epsilon) {
        guess = (guess + number / guess) / 2.0;
    }
    return guess;
}

double calculateCubeRoot(int number) {
    double guess = number / 3.0;
    double epsilon = 0.00001;
    while ((guess * guess * guess - number) > epsilon || (guess * guess * guess - number) < -epsilon) {
        guess = (2 * guess + number / (guess * guess)) / 3.0;
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
    cout << "Enter a number greater than 25: ";
    cin >> number;
    if (number <= 25) {
        cout << "Number should be greater than 25." << endl;
        return 1;
    }
    cout << "The square of the number is: " << calculateSquare(number) << endl;
    cout << "The cube of the number is: " << calculateCube(number) << endl;
    cout << "The square root of the number is: " << calculateSquareRoot(number) << endl;
    cout << "The cube root of the number is: " << calculateCubeRoot(number) << endl;
    cout << "The factorial of the number is: " << calculateFactorial(number) << endl;
    return 0;
}
