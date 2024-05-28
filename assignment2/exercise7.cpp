// Program to calculate the sum and average of 4 numbers

#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, num4;
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    float sum = num1 + num2 + num3 + num4;
    float average = sum / 4;

    cout << "Sum of the numbers: " << sum << endl;
    cout << "Average of the numbers: " << average << endl;

    return 0;
}
