//Insert element at specific position


#include <iostream>
using namespace std;
void addarr(int arr[], int &size, int poisition,int element , int capacity ){ // call by refrence 
    if(capacity<=size){ //can't add element 
        cout<<" array is full ";
        return;
    }
   else if(poisition<0 || poisition>size){
        cout<<"deletion not positible ";
        return;
    }
    
    for(int i=size-1;i>=poisition;i--){
        arr[i+1]= arr[i]; 
    }
    arr[poisition] = element;
    size++;


}
int main (){
    int capacity = 100;
    int arr[capacity]={2,4,6,9,23};
    int element = 67;
    int size =5;
    int position = 3;
     cout<<"array before";
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    addarr(arr, size, position,element, capacity);
     for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
     }
    }