#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;  
    
    void sleep() {  
        cout << "Sleeping" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Hello" << endl;
    }
};

int main() {
    Animal* myDog = new Dog();
    myDog->makeSound();  
    myDog->sleep();      
    delete myDog;
    return 0;
}
