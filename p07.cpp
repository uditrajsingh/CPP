#include<iostream>

int main(int argc, char const *argv[])
{
    int arr[] = {5, 4, 3, 2, 1};
    int *p = arr;


    for (int i = 0; i < 5; i++)
    {
        std::cout<< "Address at index " << i << " = " << p << "\n";
        std::cout<< "Value at index " << i << " = " << *p << "\n";
        p += 1;
    }
    return 0;
}
