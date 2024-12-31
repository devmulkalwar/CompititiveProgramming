#include<bits/stdc++.h>
using namespace std;
int sumOfNumbers(int n){
    if(n<=0) 
    return 0;
    else{
       return (n+sumOfNumbers(n-1));
    }
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<< sumOfNumbers(n);
    return 0;
}