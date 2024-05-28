// Print the pattern

#include <iostream>
using namespace std;

int main() {
    int n = 7; // Number of lines for the top half
    for (int i = 1; i <= n; i += 2) {
        for (int j = n; j > i; j -= 2) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = n; j > i; j -= 2) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
