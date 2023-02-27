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
void print_str(vector<string> list , string input){      // function to print the string
    input = upper_letter(input);                         // change all input character to uppercase
    for (int i = 0 ; i < list.size() ; i++){             // loop thru the list
        string upper_string = upper_letter(list[i]);     // change the string in vector to be uppercase
        char first_letter = upper_string[0];             // get the first character of the string
        if (first_letter == input[0]){                   // Compare if first character and the input match 
            cout << list[i] << endl;                     // print the string with the same first character as input
        }
    }
}

int main(){
    string input;
    vector<string> list;
    while(input != "quit"){                              // if while == quit then end program
        cin >> input;       
        if(input.length() != 1){                         // if the string have length that above 1 we add to the vector list
            list.push_back(input);
        }
        else{
            print_str(list , input);                     // if length 1 we use the th above function to handle it
        }
        if (input == "quit"){
            break;
        }
    }
    return 0;
}