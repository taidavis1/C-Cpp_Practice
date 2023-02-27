#include <iostream>
using namespace std;

int main(){

    std::string to_reverse;

    cout << "Enter the string to reverse: ";

    // store user input in to to_reverse where they want the string to be reverse

    cin >> to_reverse;

    // read the elements in to_reverse backward

    for (int i = to_reverse.size()-1; i < to_reverse.size(); i--){

        cout << to_reverse[i];

    }

    return 0;

}