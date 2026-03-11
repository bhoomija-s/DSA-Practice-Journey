//Linear search - count how many times element appears
#include <iostream>
using namespace std;
int countele(int arr[], int n, int ele){
    int count = 0;
    for(int i =0;i<n;i++){
        if(arr[i]==ele){
            count++;
        }
         // if u do return here in loop anywhere after if they immitately return so yeah
       
    }
    return count;
    
}
int main(){
    int arr [] = {1,1,1,6,82,43};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int result = countele(arr,n,1);
    cout<<"element exist count  "<<result;
}