#include "HTable.h"
#include <iostream>
using namespace std;

HTable::HTable(){

    max_size = 23;

    dt = new Data[max_size];

    numel = 0;

}

HTable::HTable(int t_size){

    max_size = t_size;

    dt = new Data[max_size];

    for(int i = 0 ; i < max_size ; i++){

        this -> dt[i].key = -1;

        this -> dt[i].value = "N/A";

    }
    
    this -> numel = 0;
}

int HTable::hash(int &k){

    int j = k % max_size;

    return j;

}

int HTable::rehash(int &k){

    k = k + 1;

    int j = k % max_size;

    return j;

}

int HTable::add(Data &d){

    int i = hash(d.key);

    if(numel == max_size){

        return -1;

    }

    int old = d.key;

    while(dt[i].key != -1){

        i = rehash(d.key);

    }


    if(dt[i].key == -1){

        dt[i].key = old;

        dt[i].value = d.value;
    }

    numel = numel + 1;

    return 0;

}

int HTable::remove(Data& d){

    int j;

    int found = 0;

    for(j = 0; j < max_size ; j++){

        if(d.key == dt[j].key){

            dt[j].key = -1;

            dt[j].value = "N/A";

            found = found + 1;

            numel = numel - 1;

        }

    }

    if(found == 1){

        return 0;

    }

    return -1;

}

void HTable::output(){

    for(int i = 0; i < max_size; i++){

        cout << i << " --> " << dt[i].key << "  " << dt[i].value << endl;
        
    }

    cout << "There are " << numel << " data in the table" << endl;


}