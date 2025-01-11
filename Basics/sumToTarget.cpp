#include <bits/stdc++.h>
using namespace std;

void sumToTarget(){
    int ar[]={2,7,11,15};
   
    for(int i=0;i<3;i++){
        for(int j=i+1; j<4;j++)
        {
            if(ar[i]+ar[j]==9){
                  cout<<"Target sum found in array at location "<<i+1<<" & "<<j+1<<endl;
            }
        }
    }
}

int main() {
    sumToTarget();
    return 0;
}