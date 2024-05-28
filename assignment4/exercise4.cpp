// Program to perform a countdown from a number to 0, decrementing by 2

#include <iostream>
using namespace std;

void countdownByTwo(int number) {
    while (number >= 0) {
        cout << number;
        number -= 2;
        if (number >= 0) {
            cout << ",";
        }
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    countdownByTwo(number);

    return 0;
}
