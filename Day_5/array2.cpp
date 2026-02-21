//Find single missing number in sorted array (1 to n)

#include <iostream>
using namespace std;

int findMissing(int arr[], int n){
    int expected = (n+1)*(n+2)/2; 
    int actual = 0;

    for(int i=0;i<n;i++){
        actual += arr[i];
    }

  return expected - actual;
}

int main(){
    int arr[] = {1,2,3,4,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Missing number = "<<findMissing(arr,n);
}