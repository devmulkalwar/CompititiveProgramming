#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of array : ";
    cin >> n;
    
    int arr[n];
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[j]<arr[i]){
                int temp= arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }
    
    cout<<"Sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}