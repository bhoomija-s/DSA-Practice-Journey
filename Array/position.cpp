/*Q2: Find First and Last Position in Sorted Array (TESTS: Binary Search + Logic)
The Set-up: Array has duplicates, find where element starts and ends

text
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]  (first 8 at index 3, last at 4)

If not found: [-1,-1]

Time: 15 mins*/
#include <iostream>
using namespace std;
int firstpoi(int arr[], int n, int tar){
   
    int left = 0;
    int right = n-1;
    while(left<=right){
        int mid= left+( right - left)/2;
        if(arr[mid]==tar){
        if(mid == 0 || arr[mid -1]!= tar){
           
            return mid;
        }
        else right = mid -1;
    }
        if(arr[mid]>tar){
            right = mid-1;
        }
        if(arr[mid]<tar){
            left = mid+1;
        }
     
    }
     return -1;
}
int lastpoi(int arr[], int n, int tar){
    int last = -1;
    int left = 0;
    int right = n-1;
    while(left<=right){
        int mid= left+( right - left)/2;
        if(arr[mid]==tar) {
        if( mid==n-1 || arr[mid+1]!=tar){
           
            return mid;
        }
        else left = mid+1;
    }
        if(arr[mid]>tar){
            right = mid-1;
        }
        if(arr[mid]<tar){
            left = mid+1;
        }
      
    }
    return -1;
}
int main(){
    int arr[]={1,3,5,7,7,7,89};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pos1 = firstpoi(arr,n,7);
    int posla = lastpoi(arr,n,7);
    cout<<" the first position "<<pos1 <<endl;
    cout<<"last position "<<posla;
}
