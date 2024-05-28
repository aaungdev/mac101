// Allow the user to choose a beverage from a list

#include <iostream>
using namespace std;

int main() {
    const char* beverages[5] = {"Coffee", "Tea", "Juice", "Water", "Soda"};
    cout << "Enter 5 beverage choices: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << beverages[i] << endl;
    }
    int choice;
    cout << "Enter the number of your choice (1-5): ";
    cin >> choice;
    if (choice >= 1 && choice <= 5) {
        cout << "You chose: " << beverages[choice - 1] << endl;
    } else {
        cout << "Invalid choice." << endl;
    }
    return 0;
}
