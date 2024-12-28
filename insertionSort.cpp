
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter array elements: ";
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp= arr[j-1];
            arr[j-1] = arr[j];
            arr[j]= temp;
            j--;
        }
    }
    
    cout<<"Sorted array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}