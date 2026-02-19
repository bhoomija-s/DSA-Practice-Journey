//Linear search - count how many times element appears

#include <iostream>
using namespace std;
int countelement(int arr[], int n , int element){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i] == element){
            sum++;
        
        }
    }
    return sum;
}
int main (){
    int arr[]={1,2,3,1,2,3,564,643,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 2;
    int result = countelement(arr,n,key);
    cout<<"so sum of"<<key<<"is: "<<result;
    return 0;
}