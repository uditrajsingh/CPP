#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *a = new int[n];
    cout<< "Address:- " << a << "\n";

    for(int i=0; i<n; i++){
        a[i] = i+1;
    }
    for(int j=0; j<n; j++){
        cout<< a[j];
    }
    cout<< "\n";


    return 0;
}
