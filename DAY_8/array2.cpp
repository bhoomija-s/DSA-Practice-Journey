//Medium: Given a sorted array, remove the duplicates in-place such that each element appears only once.
// Return the new length. (Hint: This is a variation of the shifting concept. Use two pointers—one to explore, 
//one to mark the place for the next unique element) 
#include <iostream>
using namespace std;
int removedub ( int arr[],int n){
    if (n==0) return 0;
    int j =0;
  for (int i = 1;i<n; i++){
    if(arr[j]!=arr[i]){ // learned form left and right finger logic 
      j++;
      arr[j]=arr[i]; 
    }
   
  }
  return j+1;

}
int main(){
    int arr[] = {1,2,2,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
     cout<<"size of array"<<n;
     int newlength = removedub(arr,n);
    cout<<"array after"<<endl;
    for (int i =0;i<newlength;i++){ //newlength use
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"size of array"<<newlength;
}