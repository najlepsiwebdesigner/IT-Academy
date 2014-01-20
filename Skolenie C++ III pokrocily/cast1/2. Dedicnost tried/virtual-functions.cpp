#include <iostream>

class Animal
{        
    public: 
      // turn the following virtual modifier on/off to see what happens
      //virtual   
      std::string Says() { return "?"; }  
};

class Dog: public Animal
{
    public: std::string Says() { return "Woof"; }
};

int main()
{
    Dog* d = new Dog();
    Animal* a = d;       // refer to Dog instance with Animal pointer

    using namespace std;

    cout << d->Says();   // always Woof
    cout << a->Says();   // Woof or ?, depends on virtual

    return 0;
}
