#include <iostream>
using namespace std;
void output(int num){
    if (num > -1){
        cout << "POSITIVE , ";
    }
    else {
        cout << "NEGATIVE , ";
    }
    if(num % 2 == 0){
        cout << "EVEN" << endl;
    }
    else{
        cout << "ODD" << endl;
    }
}
int main(){
    int num;
    cout << "PLease Enter Number: ";
    cin >> num;
    cout << "This Number is: ";
    output(num);
    return 0;
}