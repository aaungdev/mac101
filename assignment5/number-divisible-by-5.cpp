#include <iostream>

using namespace std;

void printDivisibleBy5(int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (i % 5 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int start = 1;
    int end = 100;

    printDivisibleBy5(start, end);

    return 0;
}
