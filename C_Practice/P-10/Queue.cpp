#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue(){}

Queue::~Queue(){}

void Queue::enqueue(int value){

    insertAtBack(value);

}

int Queue::dequeue(){


    if(isEmpty()) {

        throw 10;

    }

    int first_val = get_first() -> val;

    removeFromFront();

    return first_val;

}

int& Queue::front(){

    if (isEmpty()) {

        throw 10;

    }

    Node* first_val = get_first();

    return first_val -> val;

}