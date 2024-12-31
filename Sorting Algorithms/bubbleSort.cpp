#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j]=temp;
            }
        }
    }
    cout<<"Sorted array is : "<<endl;
    for(int i=0; i<n;i++){
       cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cout<<"Enter length of array : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i=0; i<n;i++){
       cin>>arr[i];
    }
    
    bubbleSort(arr,n);

    return 0;
}