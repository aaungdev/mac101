// Print the full name in reverse order

#include <iostream>
using namespace std;

void reverseString(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << " ";
}

int main() {
    char firstName[50], lastName[50];
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    reverseString(lastName);
    reverseString(firstName);
    cout << endl;
    return 0;
}
