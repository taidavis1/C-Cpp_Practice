#include <iostream>
using namespace std;
int main(){
int pu_nums;
int pu_nums_error;
cout << "Enter the number of lines for the punishment: ";
cin >> pu_nums;
cout << "Enter the line for which we want to make a typo: ";
cin >> pu_nums_error;
if ( (pu_nums < 0)||(pu_nums_error < 0) ){

    if(pu_nums_error < 0){
        cout << "You entered an incorrect value for the line typo!" << endl;
    }

    else{
        cout << "You entered an incorrect value for the number of lines!" << endl;
    }
}
else{
    for (int i = 0; i < pu_nums ; i++){
        if (i == pu_nums_error - 1){
            cout << "I will always use object oriented programing. ";
	        i++;
        }
       	 cout << "I will always use object oriented programming. ";
    }
}
return 0;
}

