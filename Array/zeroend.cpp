/*MOVE ZEROS TO END - The Thinking Process
Step 1: What are we trying to do?
Take this array: [0, 3, 0, 1, 4]
We want: [3, 1, 4, 0, 0]*/
#include <iostream>
using namespace std;
void movez(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            while(i)
            int temp9 = arr[n-1];
            arr[n-1]=0;
            arr[i]=arr[i+1];
            arr[n-2]= 0;
            i++;
             
        }
    }
    
}