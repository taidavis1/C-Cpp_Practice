#include <iostream>
#include "Queue.h"

using namespace std;

int main(){

    Queue first_q;

    try{

        first_q.dequeue();

    }

    catch(int e){

        cout << "Call to dequeue() generated an exception, because the queue is empty " << endl;

    }

     try{

        first_q.front();

    }

    catch(int e){

        cout << "Call to front() generated an exception, because the queue is empty " << endl;

    }

    for (int i = 0 ; i < 10;  i++){

        first_q.enqueue(i);

    }

    cout << "Front: " << first_q.front() << endl;

    cout << "Dequeue Number: " << first_q.dequeue() << endl;

    cout<< "Size: " << first_q.size() << endl;

    cout << "Print Queue: ";

    first_q.print();

    cout << endl;
    

    return 0;

}