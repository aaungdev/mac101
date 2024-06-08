#include <iostream>

using namespace std;

void reverseString(char str[], int length) {
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char firstName[50], lastName[50];

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    int firstNameLength = 0;
    while (firstName[firstNameLength] != '\0') {
        firstNameLength++;
    }

    int lastNameLength = 0;
    while (lastName[lastNameLength] != '\0') {
        lastNameLength++;
    }

    reverseString(firstName, firstNameLength);
    reverseString(lastName, lastNameLength);

    cout << lastName << " " << firstName << endl;

    return 0;
}
