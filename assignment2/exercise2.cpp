// Program to calculate the volume of a cylinder

#include <iostream>
using namespace std;

const float PI = 3.141592653589793238;

int main() {
    float radius, height;
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    float volume = PI * radius * radius * height;

    cout << "Volume of the cylinder: " << volume << endl;

    return 0;
}
