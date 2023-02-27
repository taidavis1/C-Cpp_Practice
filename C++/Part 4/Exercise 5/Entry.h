#ifndef ENTRY_H
#define ENTRY_H

#include <iostream>

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

#endif