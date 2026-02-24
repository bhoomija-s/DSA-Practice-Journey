//Easy: Write the logic to reverse an array in-place. (Hint: Think about swapping the first and last elements,
// then the second and second-last, and so on). This is a fundamental building block 
#include <iostream>
using namespace std;
void reverse ( int arr[], int n, int i, int j){
    while (i<=j){
        int temp = arr[i];
        arr[i]=arr[j];
       arr[j]= temp;
        i++;
        j--;
    }

}
int main (){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"array before"<<endl;
    for ( int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int i = 0;
    int j = n-1;
    cout<<"array after"<<endl;
    reverse(arr,n,i,j);
    for ( int i =0;i<n;i++){
       cout<<arr[i]<<" ";
    }
}