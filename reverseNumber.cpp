#include <bits/stdc++.h>
using namespace std;

int digitCount(int n){
    if(n==0){
        return 0;
    }else{
        return floor(log10(n))+1;
    }
}

int reverseNumber(int n, int d){
    if(n<10)
    return n;
    
    else{
        return (n%10) * pow(10,d-1) + reverseNumber(n/10,d-1 );
    }
}

int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    int digits = digitCount(n);
    
    cout<<"Reversed Number is : "<<reverseNumber(n,digits);

    return 0;
}