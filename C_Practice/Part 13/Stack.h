#ifndef STACK_H
#define STACK_H
#include "LinkedList.h"

using namespace std;

template<class T>

class Stack : public LinkedList<T>{

    public:

        Stack();

        ~Stack();

        void push(T value);

        int pop();

        T top();


};

template<class T>

    Stack<T>::Stack(){}

template<class T>

    Stack<T>::~Stack(){}

template<class T>

void Stack<T>::push(T value){

    this -> insertAtFront(value);

}

template<class T>


    int Stack<T>::pop(){

        int first_val  = this -> get_first() -> val;

        if(this -> removeFromFront()){

            return first_val;

        }

        return 0;

    }

template<class T>

    T Stack<T>::top(){

        Node<T>* first_val = this -> get_first();

        while(first_val -> next != NULL){

            first_val = first_val -> next;

        }

        return first_val -> val;

    }



#endif
