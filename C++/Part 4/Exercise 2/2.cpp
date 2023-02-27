#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
    int n;
    cin >> n;
    double d_nums;
    Stack double_stack[n];
    double_stack->initialize();
    for(int i = 0 ; i < n; i++){
        cin >> d_nums ;
        double_stack->push(new double (d_nums));
    }
    while(double_stack->head != 0){
        cout << *(double*) double_stack->head->data << endl;
        double_stack->head = double_stack->head->next;
    }
    double_stack->cleanup();
    cout << "\n";
}