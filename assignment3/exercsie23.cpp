// Explain the outputs of the provided loops

#include <iostream>
using namespace std;

int main() {
    // First loop (corrected)
    int n = 1024;
    int log = 0;
    for (int i = 1; i < n; i = i * 2) {
        log++;
    }
    cout << n << "  " << log << endl; // Output: 1024 10

    // Second loop
    int x = 10;
    while (x > 0) {
        cout << x << endl;
        x = x + 3;
    }

    // Third loop
    for (int n = 10; n > 0; n = n - 2) {
        cout << "Hello";
        cout << n << endl;
    }
    return 0;
}
