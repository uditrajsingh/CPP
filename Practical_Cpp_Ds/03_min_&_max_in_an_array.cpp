#include<iostream>
using namespace std;
int min(int arr[], int size){
    int min_index = 0;
    for(int i=0; i<size; i++){
        if(arr[i]<arr[min_index]){
            min_index = i;
        }
    }
    return min_index;

}
int max(int arr[], int size){
    int max_index = 0;
    for(int i=0; i<size; i++){
        if(arr[i]>arr[max_index]){
            max_index = i;
        }
    }
    return max_index;
}

int main()
{
    int arr[5] = {10, 1, 4, 6, 39};

    cout << "Minimun: " << arr[min(arr, 5)] << "\n";
    cout << "Maximum: " << arr[max(arr, 5)] << "\n";

    return 0;
}
