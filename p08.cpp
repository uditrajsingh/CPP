#include <iostream>
void print(char c[]){
    int i = 0;
    while(c[i] != '\0'){
        std::cout<< c[i];
        i ++;
    }
    std::cout<< "\n";
}
int main(int argc, char const *argv[])
{
    char c[20] = "Hello";
    print(c);
    return 0;
}
