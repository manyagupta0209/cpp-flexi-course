#include <iostream>
using namespace std;
//-------------------------HEIRARCHIAL INHERITANCE-------------------------
// base class
class Animal {
public:
    void info() {
        cout << "I am an animal." << endl;
    }
};

// derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "I am a Dog. Woof." << endl;
    }
};

// derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "I am a Cat. Meow." << endl;
    }
};

int main() {
    // object of Dog class
    Dog d1;
    cout << "Dog Class:" << endl;
    d1.info();  // parent Class function
    d1.bark();

    // object of Cat class
    Cat c1;
    cout << "\nCat Class:" << endl;
    c1.info();  // parent Class function
    c1.meow();

    return 0;
}