#include <iostream>
using namespace std;

void sortArr(int method , int arr_size , int arr[]){

    int max, i_max;

    if(method == 1){

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

    }

    if (method == 2){

        int i_min, min;

        for(int i = 0; i < arr_size; i++){

            min = arr[i];

            i_min = i;

            for(int j = i+1;  j < arr_size; j++){

                if(arr[i] > arr[j]){

                    min = arr[j];

                    i_min = j;

                    if(i_min != i){

                        swap(arr[i] , arr[i_min]);

                    }

                }
            }

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

        cout << "Sort in ascending (2) or descending (1) order? ";

        cin >> method;

        sortArr(method , arr_size , arr);

        if (method == 1){

            cout << "This is the sorted array in descending order: ";

            for (int i = 0 ; i < arr_size ; i++){

                cout << arr[i] << " ";

            }

        }

        else{

            cout << "This is the sorted array in ascending order: ";

            for (int i = 0 ; i < arr_size ; i++){

                cout << arr[i] << " ";

            }

        }

        cout << endl;

    }


    return 0;

}