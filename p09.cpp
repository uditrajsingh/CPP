#include<iostream>
using namespace std;

int main(){

    int a;
    int *p;
    p = new int;
    *p = 10;
    cout << "Address = " << p << " Value = " << *p << "\n";
    delete p;
    cout << "Address = " << p << " Value = " << *p << "\n";

    p = new int[20];
    p[0] = 100;
    cout << "Address = " << p << " Value = " << p[0] << "\n";

    return 0;
}
