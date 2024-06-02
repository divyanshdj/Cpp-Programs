/*
Q.3. Write a program to create a class “employee” consists of name, age and salary and member functions
for input/output. Enter the records of five faculty and seven staff and print them using array of objects.
*/

#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int age;
    double salary;

public:
    Employee() : name(""), age(0), salary(0.0) {}

    Employee(const string& n, int a, double s) : name(n), age(a), salary(s) {}

    void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore();
    }

    void output() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    const int NUM_FACULTY = 5;
    const int NUM_STAFF = 7;

    Employee faculty[NUM_FACULTY];
    Employee staff[NUM_STAFF];

    cout << "Enter details for faculty:\n";
    for (int i = 0; i < NUM_FACULTY; ++i) {
        cout << "Faculty " << i + 1 << ":\n";
        faculty[i].input();
    }

    cout << "\nEnter details for staff:\n";
    for (int i = 0; i < NUM_STAFF; ++i) {
        cout << "Staff " << i + 1 << ":\n";
        staff[i].input();
    }

    cout << "\nFaculty Details:\n";
    for (int i = 0; i < NUM_FACULTY; ++i) {
        cout << "Faculty " << i + 1 << ":\n";
        faculty[i].output();
        cout << endl;
    }

    cout << "\nStaff Details:\n";
    for (int i = 0; i < NUM_STAFF; ++i) {
        cout << "Staff " << i + 1 << ":\n";
        staff[i].output();
        cout << endl;
    }

    return 0;
}
