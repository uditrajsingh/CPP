#include<iostream>
using namespace std;

int main(){

    int arr[25][4];

    arr[12][3] = 24;

    cout << "Data at arr[12][3]: " << arr[12][3] << "\n";
    cout << "Address at arr[12][3]: " << (*(arr+12) + 3) << "\n";

    return 0;
}
