#include <iostream>
using namespace std;

int main(){

    // set variables , nums is the number in the array , v is user value to find

    // Ask user to enter ther array size)

    int arr_size , nums , v;

    int arr[arr_size];

    cout << "Enter the size of the array: ";

    cin >> arr_size;

    if(arr_size < 0){

        cout << "ERROR: you entered an incorrect value for the array size!";

    }

    else{

        // Insert items in to the array

        cout << "Enter the numbers in the array, separated by a space, and press enter: ";

        for(int i = 0; i < arr_size ; i++){

            cin >> nums;

            arr[i] = nums;

        }

        // User input for element to find

        cout << "Enter a number to search for in the array: ";

        cin >> v;

        // linear search, loop thru the array
        // if the number in the array equal to the number use want to find then output
        // the worst scenario if the number is at the end.
        for (int key = 0 ; key < arr_size ; key++){

            if(arr[key] == v){

                cout << "Found value " << v << " at index " << key << ", which took " <<key+1 << " checks." << endl;

                if(key+1 == arr_size){
                    
                    cout << "We ran into the worst case scenario!" << endl;

                }

                else{

                    cout << "We ran into the best case scenario!" << endl;

                }

                break;

            }

            // No numbers that user looking for then out put

            else{

                cout << "The value v was not found in the array!" << endl;

            }


        }

        return 0;

    }

}