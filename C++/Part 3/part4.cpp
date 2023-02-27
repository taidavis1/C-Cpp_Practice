#include <iostream>
#include <vector>
using namespace std;

bool validation(vector<vector <string> *>V , string words){         // this function to find if there is a existing words in the vector ot not
    for(int i = 0; i < 10; i++){                                   // vector in a vector
        for(int j = 0; j < V[i] -> size() ; j++){                  // loop 2 times to reach the data
            if (V[i] -> at(j) == words){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector< vector <string> * > V(10);                              // initilize vector of string pointer to vector V with 10 entries
    for(int i = 0; i < 10; i++){                                    // initilize each entry with a vector of string
        V[i] = new vector <string>;
    }
    int position;
    string words;
    while(words != "quit"){                                         // if quit end program
        cin >> words;
        if(words == "quit"){
            break;
        }
        else if (!validation(V , words)){                            // if there is no existing words
            V[words.size()-1] -> push_back(words);                   // Add the string at vector at [the size of words - 1]
        }
        else{
            continue;
        }
    }
    for(int i = 0; i < 10; i++){                                       // loop thr to print out each entry
        for(int j = 0; j < V[i] -> size(); j++){
            if (V[i] -> size() > 1){
                cout << V[i] -> at(j) << " ";
            }
            else{
                cout << V[i] -> at(j);
            }
        }
        cout << endl;
    }
}