// Given an integer array nums, rotate the array to the left by one.
#include <iostream>
using namespace std;
int main(){
    int first;
    int n = 5;
    int arr[]={1,3,5,7,9};
    cout<<"array before";
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
        arr[i]=arr[i+1];
    }
    first = arr[0];
    arr[n-1] = first;
    cout<<"array after ";
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
       
    }
}
