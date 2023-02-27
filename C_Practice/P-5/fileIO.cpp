#include <iostream>
#include <fstream>
#include <string>
using namespace std;


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

    // write each words in the output file from the array.

    ofstream word_file_out("words_out.txt");

    for (int i = 0; i < counter; i++){

        if(!word_file_out.eof()){

            if(i == counter-1){

                word_file_out << arr[i];

            }

            else{
                
                word_file_out << arr[i] << "\n";

            }
        }

        else{

            word_file_out.close();

        }
    }

    // Delete memories of the array

    delete[] arr;

    return 0;

}