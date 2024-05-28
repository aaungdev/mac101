// Input 10 numbers and print the greatest, smallest, and average value

#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }
    int greatest = numbers[0], smallest = numbers[0];
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > greatest) {
            greatest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        sum += numbers[i];
    }
    cout << "Greatest number: " << greatest << endl;
    cout << "Smallest number: " << smallest << endl;
    cout << "Average value: " << sum / 10.0 << endl;
    return 0;
}
