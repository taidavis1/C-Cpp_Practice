#include <iostream>
using namespace std;

// declare pointer: int x = 3 , int * x_pointer = &x (this store the address of number 3)
// Dereference: is just to cout << * x_pointer << endl; 
// By using this I could do the samething with these calculations

int substract_nums(int *x , int * y){
    int result = *x - *y;
    return result;
}

int add_nums(int* x , int* y){
    int result = *x + *y;
    return result;
}

int multiply_nums(int *x , int* y){
    int result = (*x) *  (*y);
    return result;
}

float divide_nums(int* x , int* y){
    float x_float = float(*x);
    float y_float = float(*y);
    float result = x_float / y_float;
    return result;
}

int main(){
    int f_num , s_num;
    cout << "Please Enter First Number: ";
    cin >> f_num;
    cout << "Please Enter Second Number: ";
    cin >> s_num;
    int * first_num = &f_num;
    int * second_num = &s_num;
    cout << "Add Number: " << add_nums(first_num , second_num) << endl;
    cout << "Substract Number: " << substract_nums(first_num , second_num) << endl;
    cout << "Multiply Number: " << multiply_nums(first_num , second_num) << endl;
    cout << "Divide Number: " << divide_nums(first_num , second_num) << endl;
    return 0;
}
