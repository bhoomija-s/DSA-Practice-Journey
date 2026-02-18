//Insert element at end of array

#include <iostream>
using namespace std;
void addarr(int arr[], int &size, int element, int cap  ){ // call by refrence 
    if(cap<=size){
        cout<<" array is full ";
        return; //if array full this will return and not proceed further
    }
    arr[size] = element;
    size++;
    
    


}
int main (){
    int capacity =100;
    int arr[capacity]={2,4,6,9,23};
    int size =5;
    int ele = 78;
     cout<<"array before";
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    addarr(arr, size,ele,capacity);
     for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }


}