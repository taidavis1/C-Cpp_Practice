#include <iostream>
#include "Stash.h"
using namespace std;
int main(){
    int increment , inflate_calls = 0;
    char words;
    int nums;
    Stash s;
    cin >> increment;
    s.initialize(sizeof(char) , increment);
    while(words!= '&' && nums != 99){
        cin >> words >> nums;
        if ((words == '&') && (nums == 99)){
            break;
        }
        if (nums >= 0){
            for(int i = 0; i < nums; i++){
                s.add(new char(words));
            }
        }
        else{
            nums = abs(nums);
            for(int i = 0; i < nums; i++){
                s.add(new char(words));
            }  
            s.add(new char('\n'));
        }
    }

    for(int i =0; i < s.count(); i++){
        cout << *(char*)s.fetch(i);
    }
    cout << endl;
    cout << s.inflate_calls << endl;
    cout << s.quantity * s.size << endl;
    s.cleanup();
}