// Program to convert temperature in Kelvin to Fahrenheit

#include <iostream>
using namespace std;

int main() {
    float kelvin;
    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;

    float fahrenheit = (kelvin - 273.15) * 9/5 + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
