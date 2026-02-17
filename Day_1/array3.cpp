//2nd largest
#include <iostream>
using namespace std;
int main (){
    int arr[]={1,2,3,4,5};
    int n = 5;
    int max=arr[0];
    int ndmax;
    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            ndmax = max;
            max = arr[i];
        }
       else if(arr[i]>ndmax && arr[i]<max)
        ndmax=arr[i];
    }
    cout<<"second max"<<ndmax;

}