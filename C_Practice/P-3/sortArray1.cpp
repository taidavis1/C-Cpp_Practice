#include <iostream>
using namespace std;

int main(){

    // set variables

    int arr_size , numbers , arr[arr_size] , max , i_max;

    cout << "Enter the size of the array: ";

    cin >> arr_size;

    if (arr_size <= 0){

        cout << "ERROR: you entered an incorrect value for the array size!" << endl;

    }

    else{

        // Insert items in to the array


        cout << "Enter the numbers in the array, separated by a space, and press enter: ";

        for(int i = 0 ; i < arr_size ; i++){

            cin >> numbers;

            arr[i] = numbers;

        }

        // find the max value in the array

        // while looping if there is number greater than previous max switch it

        for(int i = 0; i < arr_size; i++){

            max = arr[i];
            
            i_max = i;

            for(int j = i+1;  j < arr_size; j++){

                if(arr[i] < arr[j]){

                    max = arr[j];

                    i_max = j;

                    if(i_max != i){

                        swap(arr[i] , arr[i_max]);

                    }

                }
            }

        }

        cout << "This is the sorted array in descending order: ";

        for(int i = 0; i < arr_size; i++){

            cout << arr[i] << " ";

        }

        cout << endl;

        cout << "The algorithm selected the maximum for the traverse of the array." << endl;

    }

    return 0;

}