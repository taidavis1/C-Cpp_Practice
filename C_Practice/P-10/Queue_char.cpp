#include <iostream>
#include "Queue_char.h"
using namespace std;

Queue::Queue(){}

Queue::~Queue(){}

void Queue::enqueue(char value){

    insertAtBack(value);

}

char Queue::dequeue(){

    if(isEmpty()) {

        throw 10;

    }

    char first_val = get_first() -> val;

    removeFromFront();

    return first_val;

}

char& Queue::front(){

    if (isEmpty()) {

        throw 11;

    }

    Node* first_val = get_first();

    return first_val -> val;

}