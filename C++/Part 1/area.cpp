#include <iostream>
using namespace std;
float calculate_area(int r){
    return float(3.14*(r*r)); // area of circle = pi(r^2)
}
int main(){
    int r;
    cout << "Please Enter Radius To Calculate: ";
    cin >> r;
    cout << "Area of Circle is : " << calculate_area(r) << endl;
    return 0;
}