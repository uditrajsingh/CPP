#include<iostream>
using namespace std;

int main(){

    int arr[10], to_search, flag=0;

    for(int i=0; i<10; i++){
        arr[i] = i+(i/2);
    }
    cout << "Array is: ";
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << "\n" << "Enter element to search: ";
    cin >> to_search;

    for (int i = 0; i < 10; ++i){
       if(arr[i] == to_search){
        cout  << to_search << " present at index " << i << " of an array.\n";
        flag = 1;
        break;
       }
    }

    if(flag != 1){
        cout << "\n" << to_search << " is not present in an array\n";
    }

    return 0;
}
