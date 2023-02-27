#include <iostream>
#include <fstream>
using namespace std;

// Function to Get all Lower case to uppercase
string upper_letter(string text){
    for(int i = 0 ; i < text.length() ; i++){
        if(ispunct(text[i])){           // check if the words contain any punctuation
            text.erase(i, 1);         // erase(position , and only 1 character to erase) so set erase(i , 1);
        }
        if (!isupper(text[i])){           // check if the words isn't  in Uppercase
            text[i] = text[i] - 32;       // ASCII change lower to upper by get the letter - 32 
        }
    }
    return text;
}

int word_occurrences_count(string user_words){
    string words;
    int count_w = 0;                                                // set word count to be 0
    ifstream my_file("words.txt");                                  // open file if file exist
    while(my_file >> words){                                        // read words by words
        if (upper_letter(words) == upper_letter(user_words)){       // comparing words in file with user words
            count_w = count_w + 1;                                  // if the same words count + 1
        }
    }
    my_file.close();
    return count_w;
}

int main(){
    string user_words;
    cout << "Please Enter The Words: ";
    cin >> user_words;
    cout << "The words Appears: " << word_occurrences_count(user_words) << " times" << endl;
    return 0;
}