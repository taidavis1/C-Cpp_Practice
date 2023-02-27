#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack(){}

Stack::~Stack(){}

void Stack::push(int value){

    insertAtFront(value);

}

int Stack::pop(){

    int first_val  = get_first() -> val;

    if(removeFromFront()){

        return first_val;

    }

    return 0;

}

int& Stack::top(){

    Node* first_val = get_first();

    while(first_val -> next != NULL){

        first_val = first_val -> next;

    }

    return first_val -> val;

}

