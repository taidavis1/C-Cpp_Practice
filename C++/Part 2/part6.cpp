#include <iostream>
using namespace std;

// shift bits to the right until reach the index.
// When shift right the least significant bit discard , most significian bit replace with 0
// example: 0000 1010 least significant is : 0 because is the bit farthes to the right      most significant is: 0 because is the bit farthes to the left
// shift right to index 1:  0000 0101
// Using bitwise and operator
// if both bit  is 1 return 1 if not return 0.
// 0000 0101        0000 0001        and
// 1            1                     1
//0             0                     0
// 1            0                     0
// 0            0                    0
// 0            0                    0
// 0            0                    0
// 0            0                    0
// 0            0                    0
// return 0000 0001 = 1
int getBit(int nums , int index){
    return (nums >> index) & 1;
}
//////////////////////////////

// Binary of 1 is 00000001 , Using bitwise or operator
// shift left is opposite of shift right
// Or operator return 1 if at least one of the other is 1.
// example number is 10 binary is 0000 1010 , and index is 0
// shift left for 0000 0001 = 0000 0001
// 0000 1010           0000 0001      or
// 0                    1             1
// 1                    0             1
// 0                    0             0
// 1                    0             1
// 0                    0             0
// 0                    0             0
// 0                    0             0
// 0                    0             0
// return 0000 1011
int setBit(int nums , int index){
    return (nums|(1 << index));
}
//////////////////////////

// Binary of 1 is 00000001 , Using bitwise shift left opeator for binary 1
// Use Complement operator ~ 
// it will replace 1 with 0 or 0 with 1
// example entet num = 10 , index = 1
// 0000 1010                0000 0010      ~0000 0010 = 1111 1101
// 0000 1010        and        1111 1101
// 0000 1000
int clearBit(int nums , int index){
    return (nums & ~(1 << index));
}
/////////////////////////////////
int main(){
    int nums;
    int index;
    cout << "Please Enter Number: ";
    cin >> nums;
    cout << "Please Enter Position: ";
    cin >> index;
    bitset<8> binary(nums);
    cout << "Convert Number To Binary: " << binary << endl;
    cout << "Get The Bit: " << getBit(nums , index) << endl;
    cout << "Set The Bit: " << bitset<8>(setBit(nums , index)) << endl;
    cout << "Clear The Bit: " << bitset<8>(clearBit(nums , index)) << endl;
    return 0;
}