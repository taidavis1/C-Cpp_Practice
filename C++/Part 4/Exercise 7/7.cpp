#include <iostream>
using namespace std;

struct case1{
    char one;
    double one_d;
};
struct case2{
    char one , two;
    double one_d;
};
struct case3{
    char one , two , three;
    double one_d;
};
struct case4{
    char one,two,three,four;
    double one_d;
};
struct case5{

};
struct case6{
    char one;
    int one_int;
    char two;
};
struct case7{
    char one , two;
    int one_int;
};

int main(){
    case1 test1;
    case2 test2;
    case3 test3;
    case4 test4;
    case5 test5;
    case6 test6;
    case7 test7;

    cout << "Case 1: " << sizeof(test1) << endl;
    cout << "Case 2: " << sizeof(test2) << endl;
    cout << "Case 3: " << sizeof(test3) << endl;
    cout << "Case 4: " << sizeof(test4) << endl;
    cout << "Case 5: " << sizeof(test5) << endl;
    cout << "Case 6: " << sizeof(test6) << endl;
    cout << "Case 7: " << sizeof(test7) << endl;
    return 0;
}