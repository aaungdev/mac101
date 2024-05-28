// Print Floyd’s triangle

#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
