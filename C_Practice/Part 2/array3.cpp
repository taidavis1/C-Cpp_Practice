#include <iostream>
using namespace std;

int main(){

    int size_2d_array , numbers , row = 1 , negative_count = 0;

    cout << "Enter the size of a 2D array: ";

    // Take user input for the size of array

    cin >> size_2d_array;

    // check wheter size of array is from 1 - 10

    if((size_2d_array < 11) && (size_2d_array > 0)){

        // if size of array is from 1-10:
            // ask user for their input numbers
            // then check whether their input contains negative numbers
            
        while(row <= size_2d_array){

            cout << "Enter the values in the array for row " << row << ", separated by a space, and press enter: ";

            for(int elements = 0; elements < size_2d_array; elements++){
                
                cin >> numbers;

                if(numbers < 0){

                    negative_count = negative_count + 1;

                }

            }

            row = row + 1;

        }

        // if there is no negative numbers, show the output

        if (negative_count == 0){

            cout << "All values are non-negative!" << endl;

        }

        // if there is negative numbers , show the output

        else{

            cout << "There are " << negative_count << " negative values!" << endl;

        }
    }

    // if size of array is not from 1 - 10, output the errors

    else{

        if(size_2d_array <= 0){

            cout << "ERROR: you entered an incorrect value for the array size! " << endl;

        }

        else{

            cout << "ERROR: your array is too large! Enter 1 to 10." << endl;

        }

    }

    return 0;

}