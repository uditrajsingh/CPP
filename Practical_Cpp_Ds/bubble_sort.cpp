#include<iostream>
#include <string>
using namespace std;

void display_array(int array[], int size, string message){
    cout << message;
    for (int i = 0; i < size; ++i){
        cout << array[i] << " ";
    }
    cout << "\n";
}

void bubble_sort(int array[], int size){
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }

    }
}

int main()
{
    int arr[5] = {6, 1, 2, 19, -23};
    display_array(arr, 5, "Before swapping: ");

    bubble_sort(arr, 5);

    display_array(arr, 5, "After sorting: ");

    return 0;
}
