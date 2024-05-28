// Find the smallest and largest element in an array

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    int smallest = arr[0], largest = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;
    return 0;
}
