
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


struct Student {
    string name;
    double exam1, exam2, homework, finalExam;
    double finalGrade;
    char letterGrade;
};

void calculateFinalGrade(Student& student) {
    student.finalGrade = 0.20 * student.exam1 + 0.20 * student.exam2 + 0.35 * student.homework + 0.25 * student.finalExam;
    
    if (student.finalGrade >= 90)
        student.letterGrade = 'A';
    else if (student.finalGrade >= 80)
        student.letterGrade = 'B';
    else if (student.finalGrade >= 70)
        student.letterGrade = 'C';
    else if (student.finalGrade >= 60)
        student.letterGrade = 'D';
    else
        student.letterGrade = 'F';
}

int main() {
    const int MAX_STUDENTS = 20;
    Student students[MAX_STUDENTS];
    int numStudents;
    
    cout << "Enter the number of students (up to 20): ";
    cin >> numStudents;
    
    // Input student information
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student #" << i+1 << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Exam 1: ";
        cin >> students[i].exam1;
        cout << "Exam 2: ";
        cin >> students[i].exam2;
        cout << "Homework: ";
        cin >> students[i].homework;
        cout << "Final Exam: ";
        cin >> students[i].finalExam;
        
        calculateFinalGrade(students[i]);
        cout << endl;
    }
    
    // Write the information to a file
    ofstream outputFile("student_grades.txt");
    if (outputFile.is_open()) {
        for (int i = 0; i < numStudents; ++i) {
            outputFile << "Student #" << i+1 << endl;
            outputFile << "Name: " << students[i].name << endl;
            outputFile << "Final Grade: " << students[i].finalGrade << endl;
            outputFile << "Letter Grade: " << students[i].letterGrade << endl << endl;
        }
        outputFile.close();
        cout << "Student grades written to file: student_grades.txt" << endl;
    }
    else {
        cerr << "Unable to write to file." << endl;
    }
    
    return 0;
}

