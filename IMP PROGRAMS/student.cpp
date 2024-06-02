/*

Q.1. Create a class named “student” that contains roll_number, stu_name, course_name, father_name and DOB as data member and Input_student and display_student as member functions. Create a derived class named “exam” from the class named “student” with publically inherited mode. The derived class contains members as mark1, mark2, mark3 as marks of three subjects and input_marks and display_results as member functions. Create an array of objects of “exam” class and display the result of 10 students.

*/

#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int roll_number;
    string stu_name;
    string course_name;
    string father_name;
    string DOB;

public:
    void input_student() {
        cout << "Enter Roll Number: ";
        cin >> roll_number;
        cin.ignore(); // to clear the buffer
        cout << "Enter Student Name: ";
        getline(cin, stu_name);
        cout << "Enter Course Name: ";
        getline(cin, course_name);
        cout << "Enter Father's Name: ";
        getline(cin, father_name);
        cout << "Enter Date of Birth (DD/MM/YYYY): ";
        getline(cin, DOB);
    }

    void display_student() {
        cout << "Roll Number: " << roll_number << endl;
        cout << "Student Name: " << stu_name << endl;
        cout << "Course Name: " << course_name << endl;
        cout << "Father's Name: " << father_name << endl;
        cout << "Date of Birth: " << DOB << endl;
    }
};

class Exam : public Student {
private:
    int mark1, mark2, mark3;

public:
    void input_marks() {
        cout << "Enter Marks for Subject 1: ";
        cin >> mark1;
        cout << "Enter Marks for Subject 2: ";
        cin >> mark2;
        cout << "Enter Marks for Subject 3: ";
        cin >> mark3;
    }

    void display_results() {
        cout << "Marks for Subject 1: " << mark1 << endl;
        cout << "Marks for Subject 2: " << mark2 << endl;
        cout << "Marks for Subject 3: " << mark3 << endl;
    }
};

int main() {
    Exam students[10];

    cout << "Enter Details for 10 Students:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Enter Details for Student " << i + 1 << ":" << endl;
        students[i].input_student();
        students[i].input_marks();
        cout << endl;
    }

    cout << "Displaying Results of 10 Students:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Results for Student " << i + 1 << ":" << endl;
        students[i].display_student();
        students[i].display_results();
        cout << endl;
    }

    return 0;
}
