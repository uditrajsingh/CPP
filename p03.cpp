#include<iostream>

int main()
{
    int a = 1025;
    int *p;
    p = &a;
    std::cout<< "Size of int is " << sizeof(int) << "\n";
    std::cout<< "Address = " << p << " Value = " << *p << "\n";
    std::cout<< "Address = " << p+1 << " Value = " << *(p+1) << "\n";

    char *p0;
    p0 = (char*)p;
    std::cout<< "Size of char is " << sizeof(char) << "\n";
    std::cout<< "Address = " << p0 << " Value = " << *p0 << "\n";
    std::cout<< "Address = " << p0+1 <<" Value = " << *(p0+1) << "\n";


    return 0;
}
