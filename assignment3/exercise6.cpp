// Print a message based on the time of the day

#include <iostream>
using namespace std;

int main() {
    int hour;
    cout << "Enter the current hour (0-23): ";
    cin >> hour;
    if (hour >= 6 && hour < 12) {
        cout << "Good morning all" << endl;
    } else if (hour >= 12 && hour < 19) {
        cout << "Good evening all" << endl;
    } else {
        cout << "Good night" << endl;
    }
    return 0;
}
