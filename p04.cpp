#include<iostream>
int main(int argc, char const *argv[])
{
    int a = 10;
    int* p = &a;
    int** p0 = &p;

    std::cout<< "Address = " << p << " Value = " << *p << "\n";
    std::cout<< "Address = " << p0 << " Value = " << *p0 << "\n";

    **p0 = 12;
    std::cout<< "Address = " << p << " Value = " << *p << "\n";

    return 0;
}
