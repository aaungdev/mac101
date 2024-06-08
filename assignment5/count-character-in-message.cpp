#include <iostream>

using namespace std;

int main() {
    char message[200];
    int length = 0;

    cout << "Enter a 5 word message: ";
    cin.getline(message, 200);

    while (message[length] != '\0') {
        length++;
    }

    cout << "The number of characters in the message is: " << length << endl;

    return 0;
}
