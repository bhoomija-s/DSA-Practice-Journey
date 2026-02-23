//Given an integer array nums, rotate the array to the left by one.
#include <iostream>
using namespace std;
void rotatearr( int arr[],int n ){
   int first = arr[0];
    for (int i =0;i<n-1;i++){
        arr[i] = arr[i+1];
         
         
    }
    arr[n-1]=first;
}
int main(){
    int arr[]={1,3,5,76,879};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"array before";
    for(int i=0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotatearr(arr,n);
     for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }

}