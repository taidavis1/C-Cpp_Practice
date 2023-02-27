#include <iostream>
using namespace std;
void output(int num){
    if (num > -1){      // number greather than -1 : Positive , if less than: Negative
        cout << "POSITIVE , ";
    }
    else {
        cout << "NEGATIVE , ";
    }
    if(num % 2 == 0){      // Even number divide by 2 , if not Odd
        cout << "EVEN" << endl;
    }
    else{
        cout << "ODD" << endl;
    }
}
int main(){
    int num;
    while(num != 0){      // Loop thru until people enter 0 to stop program
        cout << "PLease Enter Number: ";
        cin >> num;
        if (num == 0){
            break;
        }
        else{
            output(num);
        }
    }
    cout << "Program End !" << endl;
    return 0;
}