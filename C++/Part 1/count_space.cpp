#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int count;
    string words;  // set words to string
    ifstream my_file("words.txt"); // open a words.txt file
    while(my_file >> words){      // read words by words rather than line by line until no more words
        count ++;                 // count everytime read the words
    }
    cout << "Numbers of Words: " << count << endl; 
    my_file.close(); // close file
    return 0;
}