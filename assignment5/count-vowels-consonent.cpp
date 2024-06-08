#include <iostream>

using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void countVowelsAndConsonants(char message[], int &vowelCount, int &consonantCount) {
    vowelCount = 0;
    consonantCount = 0;
    for (int i = 0; message[i] != '\0'; ++i) {
        if (isalpha(message[i])) {
            if (isVowel(message[i])) {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }
}

int main() {
    char message[100];
    int vowelCount, consonantCount;

    cout << "Enter a 3 word long message: ";
    cin.getline(message, 100);

    countVowelsAndConsonants(message, vowelCount, consonantCount);

    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}
