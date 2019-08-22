#include<iostream>
void increment(int *a){
    *a += 1;
}
int main(int argc, char const *argv[])
{
    int a = 12;
    std::cout<< "Value of a = " << a << "\n";
    increment(&a);
    std::cout<< "Value of a = " << a << "\n";
    return 0;
}
