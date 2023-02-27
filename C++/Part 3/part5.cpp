#include <iostream>
#include <vector>
using namespace std;
// Same with part 4
bool validation(vector<vector <string> *>V , string words){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < V[i] -> size() ; j++){
            if (V[i] -> at(j) == words){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector< vector <string> * > V(10);
    for(int i = 0; i < 10; i++){
        V[i] = new vector <string>;
    }
    int position;
    string words;
    while(words != "quit"){
        cin >> words;
        if(words == "quit"){
            break;
        }
        else if (!validation(V , words)){
            V[words.size()-1] -> push_back(words);
        }
        else{
            continue;
        }
    }
    for(int i = 0; i < 10; i++){                             // since we know that each word length - 1 will the position of vector V.
        int word_len = i+1;                                  // we also could find how many string add it in the V[i]
        int word_count = V[i] -> size();                     // check if V[i] empty
        if(!V[i] -> empty()){                                // with this knowledge I could print out how many string in V[i], and how many total character by multiply len and count
            cout << (word_len * word_count) << " " << word_count << endl;
        }
    }
}