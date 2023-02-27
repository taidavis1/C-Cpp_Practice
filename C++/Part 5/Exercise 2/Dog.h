#ifndef DOG_H
#define DOG_H
#include "Animal.h"

class Dog: public Animal{
    public:
        Dog(string name , int age);
        ~Dog();
        void feed();
};

Dog::Dog(string name , int age){
    cout << "Creating Dog " << endl;
	this->setName(name);
	this->setAge(age);
}
void Dog::feed(){
    cout << "Dog food, please!" << endl;
}

Dog::~Dog(){
    cout << "Deleting Dog" << endl;
}

#endif