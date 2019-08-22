#include<iostream>
using namespace std;
void bin_search(int arr[], int arr_size, int to_search){
    int ll = 0;
    int ul = arr_size-1;
    int mid;
    while(ll<=ul){
        mid = (int)((ll+ul)/2);
        if(arr[mid] == to_search){
            cout  << to_search << " present at index " << mid << " of an array.\n";
            break;
        }else if(to_search > arr[mid]){
            ll ++;
        }else{
            ul --;
        }
    }
    if(ll>ul){
        cout << "\n" << to_search << " is not present in an array" << "\n";
    }
}

int main(){

    int arr[10], to_search;

    for(int i=0; i<10; i++){
        arr[i] = i+(i/2);
    }
    cout << "Array is: ";
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << "\n" << "Enter element to search: ";
    cin >> to_search;

    bin_search(arr, 10, to_search);

    return 0;
}
