#include<iostream>
int main(int argc, char const *argv[])
{
    int A[] = {2, 4, 5, 8, 1};
    for(int i=0; i<5; i++){
        std::cout<< "Address = " << &A[i] << "\n";
        std::cout<< "Address = " << A+i << "\n";
        std::cout<< "Value = " << A[i] << "\n";
        std::cout<< "Value = " << *(A+i) << "\n";
    }
    return 0;
}
