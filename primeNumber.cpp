#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n , int divisor){
    if(n<=1) 
    return false;
    

       if(divisor>=n){
           return true;
       }
       if(n%divisor==0){
           return false;
       }
    return isPrime(n, divisor+1);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    string result = isPrime(n, 2)==1? "Number is prime": "Number is not prime";
    
    cout<< result;
    
    return 0;
}