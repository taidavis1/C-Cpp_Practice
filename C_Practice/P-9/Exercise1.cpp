#include <iostream>
#include "Stack.h"

using namespace std;

int main(){

    Stack stack_1 , stack_2;

    for(int i = 0 ; i < 10 ; i++){

        stack_1.push(i);

    }

    cout << "[";

    stack_1.print();

    cout << "]";

    cout << endl;

    cout << "Element in Stack Delete: " << stack_1.pop() << endl;

    cout << "Here is Stack 1: ";

    cout << "[";

    stack_1.print();

    cout << "]";

    cout << endl;

    cout << "Stack 1 last elements is : " << stack_1.top() << endl;

    cout << "Is Stack 1 empty: " << stack_1.isEmpty() << endl;

    cout << "Is Stack 2 empty : " << stack_2.isEmpty() << endl;

    cout << "Size of Stack 1 : " << stack_1.size() << endl;

    cout << "Size of Stack 2: " << stack_2.size() << endl;

    return 0;

}