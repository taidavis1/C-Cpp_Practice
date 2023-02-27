#include <iostream>
using namespace std;

int main(){

    int size_array , numbers;
    
    cout << "Enter the size of the array: ";

    // get the input for size of array

    cin >> size_array;

    // this is array of integers where store the size of array

    int arr[size_array];
    
    // if size array less than zero output error

    if (size_array < 0){

        cout << "ERROR: you entered an incorrect value for the array size!" << endl;
    }

    else{

        int t_case = 0;

        cout << "Enter the numbers in the array, separated by a space, and press enter: ";
        // Input elements into array

        for (int i = 0 ; i < size_array ; i++){
            cin >> numbers;
            arr[i] = numbers;
        }
        // Check whether the elements in the array is increasing or not

        for (int j = 0 ; j < size_array ; j++){

            if(arr[j] > arr[j+1]){

                t_case = t_case + 1;

            }
        }
        // If increasing or descreasing output the result and output all elements in array

        if(t_case == 0){

            cout << "This IS an increasing array!" << endl;

            for (int i = 0 ; i < size_array ; i++){

                cout << arr[i]<< " ";

            }
        }

        else{

            cout << "This is NOT an increasing array!" << endl;

            for (int i = 0 ; i < size_array ; i++){

                cout << arr[i]<< " ";

            }
        }

    }

    return 0;

}