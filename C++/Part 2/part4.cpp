#include <iostream>
#include <string>
using namespace std;

// we could use std::binary for c++ but I try to write it manually

string binary_nums(int x){              // Convert to Binary
    int remainder = 0;                  
    string array_store , result_array;  // Declare another array
    if (x == 0){                        // if number = 0 , return 0
        return "0";
    }
    while(x != 0){                     // when number is different than 0
        remainder = x % 2;             // get the remainder when number modulo with 2, since convert to binary, we take number and divide by 2
        array_store = array_store + to_string(remainder);   // store the remainder to the array_store
        x = x / 2;                     // keep divide the number with 2
    }
    for(int i = array_store.length()-1; i >= 0 ; i--){         // This add the array store previous to result array with inverse
        result_array = result_array + array_store[i];
    }
    return result_array;
}

// Convert to hexa_decimal is samething with binary but
// instead of divide by 2 this time we divide by 16
// and replace 10,11,12,13,14,15 with their corresponding letters

string hexa_decimal(int x){
    int remainder = 0;
    string array_store , result_array;
    while(x != 0){
        remainder = x % 16;
        if (remainder == 10){
            array_store = array_store + 'A';
        }
        else if(remainder == 11){
            array_store = array_store + 'B';
        }
        else if(remainder == 12){
            array_store = array_store + 'C';
        }
        else if(remainder == 13){
            array_store = array_store + 'D';
        }
        else if(remainder == 14){
            array_store = array_store + 'E';
        }
        else if(remainder == 15){
            array_store = array_store + 'F';
        }
        else{
            array_store = array_store + to_string(remainder);
        }
        x = x / 16;
    }
    array_store = array_store + to_string(0);
    for(int i = array_store.length()-1; i >= 0 ; i--){
        result_array = result_array + array_store[i];
    }
    return result_array;
}

int main(){
    int nums;
    while (nums >= 0){
        cout << "Please Enter A Number: ";
        cin >> nums;
        cout << "Convert Number to Hexa_Decimal: " << hexa_decimal(nums) << endl;
        cout << "Convert Number to Binary: " << binary_nums(nums) << endl;
    }
    cout << "Program End! " << endl;
    return 0;
}