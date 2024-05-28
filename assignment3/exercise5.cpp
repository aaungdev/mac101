// Count the number of characters in the message provided by the user

#include <iostream>
using namespace std;

int main() {
    char message[100];
    cout << "What day is it today? ";
    cin.getline(message, 100);
    int length = 0;
    while (message[length] != '\0') {
        length++;
    }
    cout << "Number of characters: " << length << endl;
    return 0;
}
