#include <iostream>
#include "Queue_char.h"

using namespace std;

int main(){

    Queue queue_1;

    cout << "   Function call:              " << "  Output:              " << " Front:       Queue:      Rear:     " << endl;

    cout << "   dequeue()                    ";

    try{

        queue_1.dequeue();

    }

    catch(int e){

        cout << "Exception" << endl;

    }

    cout << "   enqueue(D)                                           "; 

    queue_1.enqueue('D');

    queue_1.print();

    cout << endl;

    cout << "   enqueue(A)                                           "; 

    queue_1.enqueue('A');

    queue_1.print();

    cout << endl;

    cout << "   dequeue()                    " << queue_1.dequeue() << "                       ";

    queue_1.print();

    cout << endl;

    cout << "   size()                       " << queue_1.size() << "                       ";

    queue_1.print();

    cout << endl;

    cout << "   enqueue(D)                                           "; 

    queue_1.enqueue('D');

    queue_1.print();

    cout << endl;

    cout << "   isEmpty()                    " << queue_1.empty_str() << "                   ";

    queue_1.print();

    cout << endl;

    cout << "   front()                      " << queue_1.front() << "                       ";

    queue_1.print();

    cout << endl;

    cout << "   enqueue(T)                                           "; 

    queue_1.enqueue('T');

    queue_1.print();

    cout << endl;

    cout << "   front()                      " << queue_1.front() << "                       ";

    queue_1.print();

    cout << endl;


    return 0;

}