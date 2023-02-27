#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

struct LinkedList{
    struct Link{
        void * data;
        Link * next;
        Link(void* dat, Link* nxt) {
			data = dat;
			next = nxt;
		}
    }*head;
    LinkedList(void * data , Link* nxt){
        head = new Link(data , nxt);
    }
    void add (LinkedList::Link * l , int n){
        for(int i = n; i > 0; i--){
            l->next = new Link(new double(i-1), l->next);
        }
    }
    void print(){
        Link * data = head;
        while (data != NULL){
            std::cout << *(double*) data->data << std::endl;
            data = data->next;
        }
    }
    void cleanup(){
        Link * data = head;
        while (data != NULL){
            delete data->data;
            Link * next = data->next;
            delete[] data;
            data = next;
        }
        head = NULL;
    }
};

#endif