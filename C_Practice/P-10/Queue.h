#ifndef QUEUE_H
#define QUEUE_H
#include "LinkedList.h"

using namespace std;

class Queue : public LinkedList{

    public:
    
        //constructor
        Queue();

        //destructor
        ~Queue();

        void enqueue(int value);

        int dequeue();

        int& front();

};


#endif