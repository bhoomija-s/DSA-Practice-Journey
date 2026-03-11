//Compare linear vs binary search (count steps for both)
#include <iostream>
using namespace std;
int elexistli (int arr[], int n, int ele,int &step  ){
    step = 0;
    for(int i =0;i<n;i++){
        step++;
        if(arr[i]==ele){
            return i;
         }
     }
return -1;
}
int binary(int arr[], int n , int ele,int &step){
    int left = 0;
    int right = n-1;
    step = 0;
    while(left<=right){
        step++;
        int mid = left + (right-left)/2;
        if(arr[mid]==ele){
            return mid;
           
        }
        if(arr[mid]>ele){
            right = mid -1;
            
        }
        if(arr[mid]<ele){
            left = mid+1;
            
        }
        
    }
     
}

int main(){
    int arr [] = {1,2,5,6,43,82};
    int n = sizeof(arr)/sizeof(arr[0]);
    int linstep,  binstep;
    int result = elexistli(arr,n,82,linstep);  //pass step by pass by refernce
    
    cout<<"element exist in index "<<result;
    cout<<"  steps in linera "<<linstep;
    int resusltb = binary(arr,n,82,binstep);
    cout<<"element exist in index "<<result;
    cout<<"  steps in binary "<<binstep;
  
}