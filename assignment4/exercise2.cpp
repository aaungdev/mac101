#include <iostream>
using namespace std;

float convertFahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    float celsius = convertFahrenheitToCelsius(fahrenheit);
    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}
