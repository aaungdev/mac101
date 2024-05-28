// Program to print the current date and time

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "Current date and time: ";
    cout << 1900 + ltm->tm_year << "-";
    cout << 1 + ltm->tm_mon << "-";
    cout << ltm->tm_mday << " ";
    cout << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;

    return 0;
}
