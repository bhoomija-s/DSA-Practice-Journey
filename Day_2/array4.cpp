//Delete element from end

#include <iostream>
using namespace std;
int removearr(int arr[], int &size ){ // call by refrence 
    if(size<=0){
        cout<<" array is empty ";
    }
    size--;


}
int main (){
    int arr[]={2,4,6,9,23};
    int size =5;
     cout<<"array before";
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    removearr(arr, size);
     for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }


}