#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std;

// Representation of an element in the linked list
template<class T>
struct Node
{
    T val; // Value of the node
    Node *next; // Pointer to the next node
};

template<class T>
class LinkedList
{
    // Public Functions/Variables
    public:
        /* IMPLEMENT THESE FUNCTIONS FOR EXERCISE1 */
        LinkedList(); // Constructor
        ~LinkedList(); // Destructor
        void insertAtBack(T valueToInsert);
        bool removeFromBack();
        void print();
        bool isEmpty();
        int size();
        void clear();
        Node<T>* get_first();


        /* IMPLEMENT THSES FUNCTIONS FOR EXERCISE2 */
        void insertAtFront(T valueToInsert);
        bool removeFromFront();

        Node<T> *first; // Pointer pointing to the begining of the list
        Node<T> *last; // Pointer pointing to the end of the list
};

// Implement your functions here:
template<class T>

    LinkedList<T>::LinkedList(){

        first = NULL;

        last = NULL;

    }

template<class T>

    LinkedList<T>::~LinkedList(){

        last = first;

        while(last != NULL){

            first = NULL;

            delete first;

            last = last -> next;

        }
    }


template <class T>

    void LinkedList<T>::insertAtBack(T value){

        // Store the value in new node

        Node<T>* new_node = new Node<T>;

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

template<class T>

    int LinkedList<T>::size(){

        last = first;

        int count = 0;

        while(last != NULL){

            count = count + 1;

            last = last -> next;

        }

        return count;

    }

template<class T>


    void LinkedList<T>::print(){

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


template<class T>

    bool LinkedList<T>::isEmpty(){

        if(size() == 0){

            return true;

        }

        else{

            return false;

        }

    }

template<class T>

    bool LinkedList<T>::removeFromBack(){

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

                Node<T>* old = last;

                last = --old;

                last -> next = NULL;

                delete last -> next;

                return true;

            }

        }

}

template<class T>

void LinkedList<T>::clear(){
    
    last = first;

    while(last != NULL){

        first = NULL;

        delete first;

        last = last -> next;

    }

}

template<class T>

    void LinkedList<T>::insertAtFront(T value){

        Node<T>* new_node = new Node<T>;

        new_node -> val = value;

        new_node -> next = first;

        first = new_node;

    }

template<class T>

    bool LinkedList<T>::removeFromFront(){

        if(isEmpty()){

            return false;

        }

        else{

            Node<T>* first_node = first;

            first = first_node -> next;

            delete first_node;

            return true;

        }

    }

template<class T>

    Node<T>* LinkedList<T>::get_first(){

        last = first;

        return last;
    }


#endif

