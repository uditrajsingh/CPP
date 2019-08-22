#include<iostream>
using namespace std;
void insert(int arr[], int size, int element, int position){
    int temp = arr[position];
    for(int i=size; i>position; i--){
        arr[i] = arr[i-1];
    }
    arr[position] = element;
}
void del(int arr[], int size, int position_){
    for(int i=position_; i<size-1; i++){
        arr[i] = arr[i+1];
    }
}
int main()
{
    int *arr = NULL;
    int size;
    int option;

    cout << "Enter size of array: ";
    cin >> size;
    arr = new int[size];
    cout << "\nEnter element 1 by 1\n";

    for(int i =0; i<size; i++){
        cin >> arr[i];
    }
    cout << "\n\n";

    cout << "*********************Menu*********************\n";
    cout << "1. Insertion\n2. Deletion\n3. Print array\n";
    cout << "**********************************************\n\n";
    cout << "Enter option: ";
    cin >> option;
    cout << "Selected option is " << option << "\n";


    switch(option){
        case 1:
            int pos, elm;
            cout << "Enter position: ";
            cin >> pos;
            cout <<"Enter element: ";
            cin >> elm;
            insert(arr, size, elm, pos-1);
            cout << "\n\n\n";

            break;
        case 2:
            int posi;
            cout << "Enter position: ";
            cin >> posi;
            del(arr, size, posi-1);

            for(int i =0; i<size-1; i++){
                cout << arr[i] <<"\n";
            }
            break;
        case 3:
            for(int i =0; i<size; i++){
                cout << arr[i] <<"\n";
            }
            break;
        default:
            break;
    }


    return 0;
}
