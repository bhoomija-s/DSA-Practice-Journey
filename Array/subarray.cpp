/*The Goal: Given an array of integers, find the total number of 
continuous subarrays whose sum equals a specific value K.*/
#include <iostream>
using namespace std;
int suarry(int arr[],int n,int t){
    int subarray;
    for (int i=0;i<n;i++){
         arr[i]+=arr[i];
         subarray=i;
    }
}