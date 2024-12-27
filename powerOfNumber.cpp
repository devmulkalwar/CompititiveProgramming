#include <bits/stdc++.h>
using namespace std;

int power(int x, int n){
    if(n==0)
      return 1;
    else
      return x * power(x,n-1);
}

int main() {
    int x, n;
    cout<<"Enter a number : ";
    cin>>x;
    
    cout<<"Enter a power : ";
    cin>>n;
    
    if(n<0) {
      cout<<"Enter power greater than or equal to zero..";
      return 0;
    }   
    cout<<power(x,n);

    return 0;
}