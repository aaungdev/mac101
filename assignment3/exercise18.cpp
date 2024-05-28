// Count the number of vowels in the message "Today is a beautiful day."

#include <iostream>
using namespace std;

bool isVowel(char c) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < 10; i++) {
        if (c == vowels[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    const char* message = "Today is a beautiful day.";
    int count = 0;
    for (int i = 0; message[i] != '\0'; i++) {
        if (isVowel(message[i])) {
            count++;
        }
    }
    cout << "Number of vowels in the message: " << count << endl;
    return 0;
}
