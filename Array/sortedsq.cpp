/* Squares of Sorted Array (TESTS: Two-pointers + Logic + Absolute values)
The Set-up: Array sorted but has negatives, square each number and return sorted

text
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: Squares: 16,1,0,9,100 → Sort → [0,1,9,16,100]
*/
#include <iostream>
using namespace std;
 int squa(int arr[],int n){
    for(int i =0;i<n;i++){
       arr[i] = arr[i]*arr[i];
    }
 }
 void sorted(int arr[],int n){
    squa(arr,n);
    for(int i=0;i<n;i++){
        int left=0;
        int right= 1;
         if(arr[left]>arr[right]){
            int temp = arr[right];
            arr[right]=arr[left];
            arr[left]=temp;
            right++;
         }
    }

 }