#include <iostream>
#include "display.h"
#include "Dog.h"
#include <vector>
using namespace std;

int main(){
    int n;
    char animal_type;
    string animal_name;
    int animal_age;
    cin >> n;
    vector<Animal*>Animal_list;
    for(int i =0 ; i < n; i++){
        cin >> animal_type >> animal_name >> animal_age;
        if (animal_type == 'A'){
            Animal* a = new Animal();
            a->setName(animal_name);
            a->setAge(animal_age);
            Animal_list.push_back(a);
        }
        else{
            Animal* d = new Dog();
            d->setName(animal_name);
            d->setAge(animal_age);
            Animal_list.push_back(d);
        }
    }
    display(Animal_list);
}