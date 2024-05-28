// Program to print names and ages of 10 students and calculate the sum and average age

#include <iostream>
using namespace std;

void printStudentInfo(const char names[][20], int ages[], int size) {
    int sumAge = 0;
    for (int i = 0; i < size; i++) {
        cout << "Student " << i + 1 << ": " << names[i] << ", Age: " << ages[i] << endl;
        sumAge += ages[i];
    }
    cout << "Sum of ages: " << sumAge << endl;
    cout << "Average age: " << (float)sumAge / size << endl;
}

int main() {
    const int numberOfStudents = 10;
    const char names[numberOfStudents][20] = {
        "John", "Emma", "Michael", "Sophia", "Daniel",
        "Olivia", "Matthew", "Ava", "Joshua", "Isabella"
    };
    int ages[numberOfStudents] = {18, 19, 20, 21, 18, 19, 20, 21, 18, 19};

    printStudentInfo(names, ages, numberOfStudents);

    return 0;
}
