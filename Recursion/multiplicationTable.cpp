#include<bits/stdc++.h>
using namespace std;

void table(int n, int i){
    if(i>10)
       return ;

    int prod = n * i;
    cout<<n<< " x "<<i <<" = "<< prod << endl;
    
   table (n,++i);
}

int main(){
int n;

cout<<"Enter a number : ";
cin>>n;

if(n<=0) 
    return 0;

 table (n, 1);

 return 0;
}