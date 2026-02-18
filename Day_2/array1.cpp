//You are given an array. The task is to reverse the array and print it.
#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,6};
    for (int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Reveresed array"<<endl;
    for (int i=4;i>=0;i--){
        
        cout<<arr[i]<<" ";
    }
}
