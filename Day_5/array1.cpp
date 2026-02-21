//Move all zeros to end while maintaining order of non-zero elements
#include <iostream>
using namespace std;

void moveZeros(int arr[], int n){
    int index = 0; 
    
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[index] = arr[i];
            index++;
        }
    }

    while(index < n){
        arr[index] = 0;
        index++;
    }
}

int main(){
    int arr[] = {1,3,0,65,7,4,0,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    moveZeros(arr,n);
    cout<<endl;

    cout<<"After moving zeros: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}