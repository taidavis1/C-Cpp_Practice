#include <iostream>
using namespace std;

bool prime_nums(int n){           // Check if number is prime or not
    if (n <= 1){                  // if negative return false or 0 or 1
        return false; 
    }
    int i = 2;                   // start with 2 since 1 is false
    while (i < n){               // loop from number to 2
        if (n % i == 0){         // if number can divide to i
            return false;        // then is not prime number
        }
        i++;
    }

    return true;                // else return true
}
int main(){
    int nums;
    cout << "Please Enter A Number: ";
    cin >> nums;
    for (int i = 0; i < nums ; i++){
        if (prime_nums(i)){         // if prime number from 0 to number
            cout << i << endl;      // print the number out
        }
    }
}