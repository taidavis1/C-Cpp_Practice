#ifndef QUEUE_CHAR_H
#define QUEUE_CHAR_H

#include "LinkedList_char.h"

using namespace std;

class Queue : public LinkedList{

    public:

        //constructor
        Queue();

        //destructor
        ~Queue();

        void enqueue(char value);

        char dequeue();

        char& front();



};


#endif // !QUEUE_CHAR_H
