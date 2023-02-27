#include <iostream>
using namespace std;

int main(){

int pu_nums;

cout << "Enter the number of lines for the punishment: ";

cin >> pu_nums;

if (pu_nums < 0){

cout << "You entered an incorrect value for the number of lines!" << endl;

}

else{

for (int i = 0; i < pu_nums ; i++){

cout << "I will always use object oriented programming. ";
}
}
return 0;

}
