#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

// Derived class from Animal (single inheritance)
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal walks" << endl;
    }
};

// Another base class
class Bird {
public:
    void fly() {
        cout << "Bird flies" << endl;
    }
};

// Derived class from both Mammal and Bird (multiple inheritance)
class Bat : public Mammal, public Bird {
public:
    void hangUpsideDown() {
        cout << "Bat hangs upside down" << endl;
    }
};

int main() {
    Bat bat;
    bat.eat();          // Inherited from Animal through Mammal
    bat.walk();         // Inherited from Mammal
    bat.fly();          // Inherited from Bird
    bat.hangUpsideDown(); // Specific to Bat

    return 0;
}
