#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> number_store;              
    int nums;
    int count = 0;
    int sum = 0;
    while(nums != 0){                            
        cin >> nums;
        if (nums > 0){                                // add to vector number store if number > 0
            number_store.push_back(nums);
        }
        if (nums < 0){                                              // if negative number
            for (int i = 0; i < number_store.size(); i++){          // loop thru vector number store 
                if ( number_store[i] == abs(nums) ){                // find any number that euqal to absolute value of number input
                    number_store.erase(number_store.begin()+ i);    // delete it, with the use of vector.erase()
                }
            }
        }
    }
    for(int i = 0; i < number_store.size(); i++){                   // if nums input = 0 , loop through the vector
        count = count + 1;                                          // find the sum, and length of vector
        sum = sum + number_store[i];
    }
    cout << count << " " << sum << endl;
     
    return 0;
}