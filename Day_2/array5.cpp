//Delete element from specific position

#include <iostream>
using namespace std;
void removearr(int arr[], int &size, int poisition ){ // call by refrence 
    if(size<=0){
        cout<<" array is empty ";
    }
   else if(poisition<0 || poisition>size){
        cout<<"deletion not positible ";
    }
    int delet = arr[poisition];
    
    for(int i=poisition ;i<size;i++){
        arr[i]= arr[i+1];
       
    }
    size--;


}
int main (){
    int arr[]={2,4,6,9,23};
    int size =5;
    int position = 3;
     cout<<"array before";
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    removearr(arr, size, position);
     for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
     }
     


}