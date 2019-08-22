#include<iostream>
using namespace std;

int main(){

    int *ptr = new int[2];

    int **ptr2 = &ptr;

    for(int i=0; i<2; i++){
        *(ptr+i) = 100*i;
    }

    cout << "Value of ptr: " << *(ptr+1) << "\n";
    cout << "Value of ptr2: " << *(*(ptr2)+1) << "\n";


    return 0;
}
