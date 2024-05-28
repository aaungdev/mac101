// Calculate the cube root of 125

#include <iostream>
using namespace std;

int main() {
    double number = 125;
    double cubeRoot = 1;
    for (int i = 0; i < 20; i++) {
        cubeRoot = (2 * cubeRoot + number / (cubeRoot * cubeRoot)) / 3;
    }
    cout << "Cube root of 125 is: " << cubeRoot << endl;
    return 0;
}
