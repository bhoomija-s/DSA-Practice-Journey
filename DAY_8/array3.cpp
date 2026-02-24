//Slightly Spicy: You are given two sorted arrays. Merge them into a single sorted array.
// (Hint: Don't insert one by one into the first array. Think about creating a new array and 
//using three pointers to track your position in each array).
#include <iostream>
using namespace std;
void merg(int arr1[], int arr2[], int n , int l){
    int i=0;
    int j =0;
    int k =0; // index of merged array
    int c[n+l]; //as c is an new merged array and n and l are end of arr1&2
    while(i<n&&j<l){
        if(arr1[i]<=arr2[j]){
            c[k++]=arr1[i++];//we use postfix so don't worry
        }
        else
        c[k++]=arr2[j++];
    }
    
   while(i<n){  //for remaining numbers like if arr1 is way bigger then arr2 so reaminag elements
    c[k++]=arr1[i++];
   }
     
   while(j<l){  //for remaining numbers like if arr1 is way bigger then arr2 so reaminag elements
    c[k++]=arr2[j++];
   }
     cout<<"Merged array:\n";
    for(int x=0;x<n+l;x++)
        cout<<c[x]<<" ";
   

    }
    int main(){
        int a1[]={1,4,5,8,9};
        int n = sizeof(a1)/sizeof(a1[0]);
         int b1[]={1,2,5,6,9};
        int l = sizeof(b1)/sizeof(b1[0]);
       merg(a1,b1,n,l);

    }
