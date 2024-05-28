// Swap the values of two variables without using a third variable

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    swap(x, y);
    cout << "Swapped values: " << x << " " << y << endl;
    return 0;
}
