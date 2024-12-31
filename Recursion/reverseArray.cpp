#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n; i++){
            cout<<arr[i]<<" ";
        }
    cout<<endl;
}

 void reverseArray(int arr[], int n, int i){
     
    if(i>= n/2 ){
        return;
    }
    else{
       swap(arr[i],arr[n-(i+1)]);
       reverseArray(arr,n,i+1);
    }
    return;
}

int main() {
    int n;
    
    cout<<"enter a length of aaray: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements array: "<<endl;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    reverseArray(arr,n,0);
    
    cout<<"reverse array is :"<<endl;
    printArray(arr, n);
    return 0;
}