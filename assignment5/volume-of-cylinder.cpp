#include <iostream>

using namespace std;

int main() {
    double radius, height, volume;
    const double PI = 3.14159265358979323846;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    volume = PI * radius * radius * height;

    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}
