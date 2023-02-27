#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <iostream>
struct AddressBook{
    struct Entry{
        std::string first_name;
        std::string last_name;
        std::string email;
        Entry(){
            first_name = "";
            last_name = "";
            email = "";
        }
        void setName(std::string first_name){
            this -> first_name = first_name;
        }
        void setLastname(std::string last_name){
            this -> last_name = last_name;
        }
        void setEmail(std::string email){
            this -> email = email;
        }
        std::string getName(){
            return first_name;
        }
        std::string getLastname(){
            return last_name;
        }
        std::string getEmail(){
            return email;
        }
        void print(){
            std:: cout << getName() << "," << getLastname() << "," << getEmail() << std::endl;
        }
    };
    int count;
    Entry *nums_entry;

    void innitilize(int count , Entry* nums_entry){
        count = count;
        nums_entry = new Entry[count];

    }
    void add(Entry * data){
        nums_entry[count] = *data;
        count++;
    }

    void print(){
        for(int i = 0; i < count; i++){
            nums_entry[i].print();
        }
    }

};

#endif