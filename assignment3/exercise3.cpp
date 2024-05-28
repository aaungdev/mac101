// Find the greatest among 10 numbers

#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }
    int greatest = numbers[0];
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > greatest) {
            greatest = numbers[i];
        }
    }
    cout << "Greatest number: " << greatest << endl;
    return 0;
}
