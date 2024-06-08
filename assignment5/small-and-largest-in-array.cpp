#include <iostream>

using namespace std;

void findSmallestAndLargest(int arr[], int size, int &smallest, int &largest) {
    smallest = arr[0];
    largest = arr[0];
    
    for (int i = 1; i < size; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int smallest, largest;
    findSmallestAndLargest(arr, size, smallest, largest);

    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;

    return 0;
}
