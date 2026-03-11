/*Problem: [4,5,6,7,0,1,2] was rotated, find min (0)*/
#include <iostream>
using namespace std;
int startp(int arr[], int n){
    int left = 0;
    int right = n-1;
    while(left<right){
         int mid= left+(right-left)/2;
         if(arr[mid]>arr[right]){
            left=mid+1;
         }
         else right=mid;
    }
    return left;
}
int main(){
    int arr[] ={4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = startp(arr,n);
    cout<<"Started point is in index:  "<<result;
}