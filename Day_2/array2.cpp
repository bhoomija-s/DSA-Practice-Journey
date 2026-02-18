//Remove Duplicates in-place from Sorted Array
#include <iostream>
using namespace std;
int main(){
    
    int arr[] = { 1,1,2,3,4,4};
    int j = 0;
    for(int i = 0;i<6;i++){
       if (arr[i]!=arr[j])
        j++;
        arr[j] = arr[i];
    }
    for(int i = 0; i<=j;i++){
        cout<<arr[i]<<" ";
    }
    
}

