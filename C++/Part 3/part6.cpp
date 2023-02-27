#include <iostream>
#include <vector>
using namespace std;

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
int main(){
    vector<string> v_string;
    string data;
    while(data != "quit"){                          // if not quit
        cin >> data;  
        if(data.size() >= 4){                       // check if words have 4 or more character, and then add it to vector
            v_string.push_back(data);
        }
        else{
            data = upper_letter(data);               // change the words to be Capitalize
            for(int i = 0; i < v_string.size(); i++){
                string upper_string = upper_letter(v_string[i]);    // get the first character of the string in vector and then chaneg to uppercase
                char first_letter = upper_string[0];
                if (first_letter == data[0]){                       // compare that first letter with the first letter of input string
                    cout << v_string[i] << endl;                    // print out the words with same first letter as input string
                }
            }
        }
        if(data == "quit"){
            break;
        }
    }
    return 0;
}