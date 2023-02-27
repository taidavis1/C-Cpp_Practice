#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int BinarySearchL(string* arr , int size , string k){

    int half = size/2;

    if (arr[half] == k){

        return half;

    }

    else{

        if(arr[half] > k){

            for(int i =  0 ; i < half ; i++){

                if(arr[i] == k){

                    return i;

                }

            }

        }

        if(arr[half] < k){

            for(int i = half; i < size ; i++){

                if(arr[i] == k){

                    return i;

                }
            }
        }

    }

    return -1;
   
}


int CheckArraySort(string* arr , int size){

    int step = 0;

    int step_2 = 0;

    for(int i = 0; i < size-1 ; i++){

        if(arr[i] < arr[i+1]){

            step = step + 1;

        }

        if(arr[i] > arr[i+1]){

            step_2 = step_2 + 1;

        }        
    }

    if( (step > 0) && (step_2 == 0)){

        return 1;

    }

    else if( (step == 0) && (step_2 > 0)){

        return -1;

    }

    else{

        return 0;
        
    }


    return 0;
}


int main(){

    ifstream word_file("words_in.txt");

    string line;

    int counter = 0;

    // dynamic memory allocation of array where store string, and counter as a size

    string* arr = new string [counter];

    // read the words from input file, and store each words in the array

    while (getline(word_file,line)){

        arr[counter] = arr[counter] + line;

        counter += 1;

        if(word_file.eof()){

            word_file.close();

        }

    }

    if (CheckArraySort(arr, counter) == 0){

        return 0;

    }

    // else{

    //     string k;

    // }

    cout << BinarySearchL(arr , counter , "chicken") << endl;

    // Delete memories of the array

    delete[] arr;

    return 0;

}

