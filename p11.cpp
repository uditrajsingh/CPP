#include<iostream>
using namespace std;

long factorial(int n){
    if(n==1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}
int prime(int n){
    int c = 2;
    for(int i=2; i<n; i++){
        if(n%i != 0){
            c ++;
        }
    }
    if(c == n){
        return 1;
    }
    return 0;
}
int eff_prime(int n){
    if(n==1 | n==2 | n==3){
        return 1;
    }
    if((n+1)%6 == 0 | (n-1)%6 == 0){
        return 1;
    }
    return 0;
}


int main(){
    cout << f();

/*
    for(int k=2; k<10000; k++){
        cout << "Value: " << "Prime: " << prime(k) << " Eff_prime: " << eff_prime(k) << "\n";
    }

    cout << "Ans: " << eff_prime(257) << "\n";
*/
    return 0;
}
