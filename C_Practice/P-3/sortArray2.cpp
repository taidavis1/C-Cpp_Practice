#include <iostream>
using namespace std;

int main(){

    // set variables

    int arr_size , numbers , arr[arr_size] , min , i_min;

    int count_swap = 0;

    cout << "Enter the size of the array: ";

    cin >> arr_size;

    if (arr_size <= 0){

        cout << "ERROR: you entered an incorrect value for the array size!" << endl;

    }

    else{

        // Insert items into array

        cout << "Enter the numbers in the array, separated by a space, and press enter: ";

        for(int i = 0 ; i < arr_size ; i++){

            cin >> numbers;

            arr[i] = numbers;

        }

        // find the min value in the array

        // while looping if there is number smaller than previous min switch it


        for(int i = 0; i < arr_size; i++){

            min = arr[i];

            i_min = i;

            for(int j = i+1;  j < arr_size; j++){

                if(arr[i] > arr[j]){

                    min = arr[j];

                    i_min = j;

                    if(i_min != i){

                        swap(arr[i] , arr[i_min]);

                        count_swap = count_swap + 1;

                    }

                }
            }

        }

        cout << "This is the sorted array in an ascending order: ";

        for(int i = 0; i < arr_size; i++){

            cout << arr[i] << " ";

        }

        cout << endl;

        cout << "The algorithm selected the minimum for the traverse of the array." << endl;

        cout << "It took " << (count_swap+1)/2 << " swaps to sort the array..." << endl;

    }

    return 0;

}
