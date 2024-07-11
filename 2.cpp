//The getColor function is declared as virtual in the Animal class and overridden in the Dog class, enabling runtime resolution based on the actual object type when using a base class pointer(Animal* animal = new Dog();), and proper cleanup is ensured with delete

#include <iostream>
using namespace std;

class Animal {
public: 
    virtual string getColor() {
        return "Color of Animal class";
    }
    virtual ~Animal() {};
};

class Dog : public Animal {
public:
    string getColor() override {
        return "Color of Dog Class";
    }
};

int main(){
    Animal* animal = new Dog();
    cout << animal->getColor() << endl;
    delete animal;
    return 0;
}