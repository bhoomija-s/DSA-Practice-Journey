//Linear search - find if element exists, return index
#include <iostream>
using namespace std;
int elexist (int arr[], int n, int ele  ){
    for(int i =0;i<n;i++){
        if(arr[i]==ele){
            return i;
        }// dont put the else statement in loop as it will excute in first loop itself
       
    }
 return -1;
}
int main(){
    int arr [] = {1,2,5,6,82,43};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int result = elexist(arr,n,82);
    cout<<"element exist in index "<<result;
}