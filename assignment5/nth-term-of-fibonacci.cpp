#include <iostream>

using namespace std;

int findNthFibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int prev = 0, curr = 1, next;
    for (int i = 2; i <= n; ++i) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int n;

    cout << "Enter the position of the Fibonacci term you want to find: ";
    cin >> n;

    int nthTerm = findNthFibonacci(n);

    cout << "The " << n << "th term of the Fibonacci series is: " << nthTerm << endl;

    return 0;
}
