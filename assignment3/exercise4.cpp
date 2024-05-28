// Print the value of xNum each time by decreasing it by 10 from 200 to 0

#include <iostream>
using namespace std;

int main() {
    int xNum = 200;
    while (xNum >= 0) {
        cout << xNum << " ";
        xNum -= 10;
    }
    cout << endl;
    return 0;
}


