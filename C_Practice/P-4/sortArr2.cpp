#include <iostream>
using namespace std;

void sortArr(int method , int arr_size , int arr[]){

    int save_nums , j;

    if(method == 1){

        // # Work from the left side to right side

        // Find the first unsorted, ex: 4 6 8 5 2, first unsorted:2

        // arr = 4 6 8 5 2

        // go thru arr and if any number greater than the save_number then shift that number

        for(int i = 1; i < arr_size ; i++){

            save_nums = arr[i];

            j = i-1;

            while(arr[j] > save_nums){

                arr[j + 1] = arr[j];

                j = j - 1;

            }

            arr[j+1] = save_nums;

        }

    }

    if (method == 2){

        for(int i = 1; i < arr_size ; i++){

            save_nums = arr[i];

            j = i-1;

            while( j >= 0 && arr[j] < save_nums){

                arr[j+1] = arr[j];

                j = j - 1;

            }

            arr[j+1] = save_nums;

        }

    }

}


int main(){

    int arr_size , numbers , arr[arr_size] , method;

    cout << "Enter the size of the array: ";

    cin >> arr_size;

    if (arr_size <= 0){

        cout << "ERROR: you entered an incorrect value for the array size!" << endl;

    }

    else{

        cout << "Enter the numbers in the array, separated by a space, and press enter: ";

        for(int i = 0 ; i < arr_size ; i++){

            cin >> numbers;

            arr[i] = numbers;

        }

        cout << "Sort in ascending (1) or descending (2) order? ";

        cin >> method;

        sortArr(method , arr_size , arr);

        if (method == 1){

            cout << "This is the sorted array in ascending order: ";

            for (int i = 0 ; i < arr_size ; i++){

                cout << arr[i] << " ";

            }

        }

        else{

            cout << "This is the sorted array in descending order: ";

            for (int i = 0 ; i < arr_size ; i++){

                cout << arr[i] << " ";

            }

        }

        cout << endl;

    }


    return 0;

}