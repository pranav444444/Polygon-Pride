#include <iostream>
#include <string>

using namespace std;

// define a Student struct
struct Student {
    string name;
    int id;
    float grade;
};

// function to add a new student to the grade book
void addStudent(Student* students, int& numStudents) {
    Student newStudent;
    cout << "Enter student name: ";
    cin >> newStudent.name;
    cout << "Enter student ID: ";
    cin >> newStudent.id;
    cout << "Enter student grade: ";
    cin >> newStudent.grade;
    students[numStudents] = newStudent;
    numStudents++;
}

// function to display all students in the grade book
void displayStudents(Student* students, int numStudents) {
    cout << "Student list:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << students[i].name << " (" << students[i].id << "): " << students[i].grade << "\n";
    }
}

// main function
int main() {
    const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];
    int numStudents = 0;
    char choice;

    do {
        cout << "Menu:\n";
        cout << "1. Add student\n";
        cout << "2. Display students\n";
        cout << "3. Quit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch(choice) {
            case '1':
                addStudent(students, numStudents);
                break;
            case '2':
                displayStudents(students, numStudents);
                break;
            case '3':
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice, try again.\n";
        }
    } while (choice != '3');

    return 0;
}
