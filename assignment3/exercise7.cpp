// Add the sum of the numbers from 50 to 100 using a while statement

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 50;
    while (i <= 100) {
        sum += i;
        i++;
    }
    cout << "Sum of numbers from 50 to 100: " << sum << endl;
    return 0;
}
