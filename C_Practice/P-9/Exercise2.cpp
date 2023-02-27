#include <iostream>
#include "Stack_char.h"

using namespace std;

int main(){

    Stack stack_1;

    std::string t_f;

    cout << "   Function call              " << "  Output              " << "   Stack Contents              " << endl;

    // Row 1:

    cout <<"isEmpty()                        "<< stack_1.empty_str() << endl;

    // Row 2:

    cout <<"push(A)                             ";

    stack_1.push('A');

    cout << "                           "; 

    stack_1.print();

    cout << "                                 " << endl;

    // Row 3:

    cout <<"push(Y)                             ";

    stack_1.push('Y');

    cout << "                           "; 

    stack_1.print();

    cout << endl;

    // Row 4:

    cout <<"size()                            " << stack_1.size() << "                            ";

    stack_1.print();

    cout << endl;

    // Row 5:

    cout <<"pop()                             " << stack_1.pop() << "                            ";

    stack_1.print();

    cout << endl;

    // Row 6:

    cout <<"isEmpty()                        "<< stack_1.empty_str() << "                         ";

    stack_1.print();

    cout << endl;

    // Row 7:

    cout <<"push(D)                             ";

    stack_1.push('D');

    cout << "                           "; 

    stack_1.print();

    cout << endl;

    // Row 8:

    cout <<"top(D)                            " << stack_1.top() << "                            ";

    stack_1.print();

    cout << endl;

    // Row 9:

    cout <<"push(T)                             ";

    stack_1.push('T');

    cout << "                           "; 

    stack_1.print();

    cout << endl;

    // Row 10:

    cout <<"pop()                             " << stack_1.pop() << "                            ";

    stack_1.print();

    cout << endl;

    return 0;

}