//When a derived class object is assigned to base class object, only the base class part is copied, and the derived class part is discarded. Thus, in Animal d = Dog();, d becomes a plain Animal object, losing any additional members from the Dog class.

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog Sound" << endl;
    }
};

int main() {
    Dog dog;
    Animal d = dog;
    d.sound(); 
    return 0;
}
