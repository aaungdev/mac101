// Print the full name by combining the first and last name provided by the user

#include <iostream>
using namespace std;

int main() {
    char firstName[50], lastName[50];
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Full name: " << firstName << " " << lastName << endl;
    return 0;
}
