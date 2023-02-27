#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int re_BinarySearch(string* arr , int size , string k){

    int first = 0;

    int last = size;

    int half = (last-first)/2;

    while(half >= 0 && half < sizeof(arr)){

        if(arr[half] == k){

            return half;

        }

        else{

            if(arr[half] > k){

                return re_BinarySearch(arr , half-1 , k);

            }

            else if(arr[half] < k){

                return re_BinarySearch(arr , last + 1 , k);

            }

        }

    }

    return -1;

        // if(arr[half] == k){

        //     return half;

        // }

        // else{

        //     if(arr[half] > k){

        //         last = half - 1;
                
        //         return re_BinarySearch(arr , last , k);

        //     }

        //     if(half < size-1){

        //         first = half + 1;
                    
        //         return re_BinarySearch(arr , size+1 , k);

        //     }

        // }

        // return -1;
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

    string k;

    cout << "Enter Words To Search: ";

    cin >> k;

    int i = re_BinarySearch(arr , counter , k);

    if( i != -1){

        cout << "Found key k at index " << i << endl;

    }

    else{

        cout << "The key k was not found in the array!" << endl;

    }

    // Delete memories of the array

    delete[] arr;

    return 0;

}

