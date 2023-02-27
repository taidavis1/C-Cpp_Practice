#include <iostream>
#include "Stack_char.h"
using namespace std;

Stack::Stack(){}

Stack::~Stack(){}

void Stack::push(char value){

    insertAtBack(value);

}

char Stack::pop(){

    Node* first_val = get_first();

    while(first_val -> next != NULL){

        first_val = first_val -> next;

    }

    if(removeFromBack()){

        return first_val -> val;

    }

    return 0;

}

char& Stack::top(){

    Node* first_val = get_first();

    while(first_val -> next != NULL){

        first_val = first_val -> next;

    }

    return first_val -> val;

}

