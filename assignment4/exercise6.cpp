// Program to check if a number is even or odd and print a message

#include <iostream>
using namespace std;

bool isEven(int number) {
    return number % 2 == 0;
}

void checkEvenOrOdd(int number) {
    if (isEven(number)) {
        cout << number << " is an even number." << endl;
    } else {
        cout << number << " is an odd number." << endl;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    checkEvenOrOdd(number);

    return 0;
}
