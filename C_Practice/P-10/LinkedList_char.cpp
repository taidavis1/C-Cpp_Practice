#include <iostream>
#include "LinkedList_char.h"
using namespace std;

LinkedList::LinkedList(){

    first = NULL;

    last = NULL;

}

LinkedList::~LinkedList(){

    last = first;

    while(last != NULL){

        first = NULL;

        delete first;

        last = last -> next;

    }
}

void LinkedList::insertAtBack(int value){

    // Store the value in new node

    Node* new_node = new Node;

    new_node -> val = value;

    new_node -> next = NULL;

    // if the list is empty , add the first node

    if(first == NULL){

        first = new_node;

    }

    // if not let last node to be first node
    
    // if the next node is not NULL

    // then change last node instead of to be first note, change it to next node 

    // if not

    // then the next node will be the new node

    // Ex:

    // insert(2)

        // The list is empty so then 2 is insert it as a first node

    // insert(3)

        // the list now is not empty because I insert 2 earlier

        // so then last node of the list set to equal to 2 where as only one value been inserted

        // so then the next node will be NULL because of only one value been inserted

        // now 3 inserted , the list have 2 values

    // insert(4)

        // the list now how 2 values

        // [2,3]

        // first node is still 2

        // so set first node to last node = 2

        // instead of next node equal to NULL ,  this time is 3

        // so change last node to be 3 instead whereas 3 is the last node of the list [2,3]

        // now set the next value after 3 which is NULL to be new node 4 , [2,3,4]

    else{

        last = first;

        while(last -> next != NULL){

            last = last -> next;

        }

        last -> next = new_node;

    }

}


int LinkedList::size(){

    last = first;

    int count = 0;

    while(last != NULL){

        count = count + 1;

        last = last -> next;

    }

    return count;

}


void LinkedList::print(){

    last = first;

    while(last != NULL){

        if(last -> next == NULL){

            cout << last -> val;

        }

        else{

            cout << last -> val << ",";

        }

        last = last -> next;


    }
}

bool LinkedList::isEmpty(){

    if(size() == 0){

        return true;

    }

    else{

        return false;

    }

}

std::string LinkedList::empty_str(){

    if(isEmpty()){

        return "true";

    }

    else{

        return "false";

    }

}

bool LinkedList::removeFromBack(){

    if(isEmpty()){

        return false;

    }

    else{

        if(size() == 1){

            delete first;

            first = NULL;

            return true;

        }

        else{

            // [-5, 0]

            last = first;

            while(last -> next != NULL){

                last = last -> next;

            }

            Node* old = last;

            last = --old;

            last -> next = NULL;

            delete last -> next;

            return true;

        }

    }

}


void LinkedList::clear(){
    
    last = first;

    while(last != NULL){

        first = NULL;

        delete first;

        last = last -> next;

    }

}

void LinkedList::insertAtFront(int value){

    Node* new_node = new Node;

    new_node -> val = value;

    new_node -> next = first;

    first = new_node;

}

bool LinkedList::removeFromFront(){

    if(isEmpty()){

        return false;

    }

    else{

        Node* first_node = first;

        first = first_node -> next;

        delete first_node;

        return true;

    }

}


Node* LinkedList::get_first(){

    last = first;

    return last;
}
