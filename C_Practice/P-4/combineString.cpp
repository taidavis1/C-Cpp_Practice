#include <iostream>
using namespace std;

std::string combineStr(std::string s , int a){

    std::string result = "";

    for (int i = 0; i < a; i++){

        result = result + s;

    }

    return result;

}

int main(){

    std::string s;

    int nums;

    cout << "Enter String: ";

    cin >> s;

    cout << "Enter Number: ";

    cin >> nums;

    if (nums == 0){

        return 0;

    }

    cout << "The resulting string is: " << combineStr(s,nums) << endl;

    return 0;


}