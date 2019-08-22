#include<iostream>

int main()
{
    int a;
    int *p;

    a = 10;
    p = &a;
    std::cout<<"a = "<<a<<"\n";
    *p = 12; //dereferencing
    std::cout<<"a = "<<a<<"\n";
    /*p = &a;
    std::cout << p <<"\n";*/

    return 0;
}
