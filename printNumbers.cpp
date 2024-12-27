#include<bits/stdc++.h>
using namespace std;
void printNumbers(int n){
    if(n<=0) 
    return;
    else{
        printNumbers(n-1);
        cout<<n<<" ";
        return;
    }
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    
    printNumbers(n);
    return 0;
}