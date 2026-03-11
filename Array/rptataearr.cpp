/*Q3: Rotate Array (TESTS: Reversal + Indexing + Math)
The Set-up: Move last k elements to front

text
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
*/
#include <iostream>
using namespace std;
void reverse(int arr[], int last, int first){
   while(first<last){
    int temp = arr[last];
    arr[last]=arr[first];
    arr[first]= temp;
    last--;
    first ++;

   }
}
void arrswap(int arr[],int n , int k){
     k=k%n;
     reverse(arr,n-1,0);
     reverse(arr,k-1,0);
     reverse(arr,n-1,k);
     for(int i;i<n;i++){
        cout<<arr[i]<<" ,";

     }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrswap(arr,n,3);
   
}