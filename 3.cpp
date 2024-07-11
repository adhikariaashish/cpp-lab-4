//Prompt the user to enter the name, age, and grade of 5 students and write this information to a file named students.txt; then  read the student information from students.txt and display it in a fromatted manner.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    double grade;
};

int main() {
    cout << "Enter the name, age, and grade of 5 students:\n";

    Student students[5];

    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Age: ";
        cin >> students[i].age;
        cout << "Grade: ";
        cin >> students[i].grade;
    }

    ofstream file("students.txt");
    if (file.is_open()) {
        for (int i = 0; i < 5; i++) {
            file << "Student " << i + 1 << ":\n";
            file << "Name: " << students[i].name << "\n";
            file << "Age: " << students[i].age << "\n";
            file << "Grade: " << students[i].grade << "\n";
        }
        file.close();
        cout << "Student information written to students.txt\n";
    } else {
        cout << "Unable to open file\n";
    }

    ifstream readFile("students.txt");
    if (readFile.is_open()) {
        string line;
        while (getline(readFile, line)) {
            cout << line << "\n";
        }
        readFile.close();
    } else {
        cout << "Unable to open file\n";
    }

    return 0;
}