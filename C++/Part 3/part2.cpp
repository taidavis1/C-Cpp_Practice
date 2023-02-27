#include <iostream>
using namespace std;

void output(char l , int n){                               // This function to print out n times the input character
    for (int i = 0; i< n ; i++){                           // loop from 0 to n
        cout << l;                                         // print the string l out
    }                                                      // ex: character = h , n = 3 , output: hhh
    cout << endl;
}
int main(){
    int nums;
    char letter;
    while(nums != -2){                                      // if number equal -2 end program
        cin >> letter >> nums;       
        if(nums == -1){                                     // print new line if number -1
            cout << "\n";
        }
        else if(nums == -2){                    
            break;
        }
        else{
            output(letter , nums);                          // Use the above function
        }
    }
    return 0;
}