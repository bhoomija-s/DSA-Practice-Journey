//Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateRight(int arr[], int n, int k){
    k = k % n;

    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=2;

    rotateRight(arr,n,k);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}