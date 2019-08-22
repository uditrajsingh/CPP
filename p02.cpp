#include<iostream>

int main()
{
    int a = 10;
    int *p =  &a;

    std::cout<<"Address p is "<<p<<"\n";
    std::cout<<"Size of intger is "<<sizeof(int)<<"\n";
    std::cout<<"Address p+1 is "<<p+1<<"\n";


    return 0;
}
