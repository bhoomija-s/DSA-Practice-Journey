/*The Goal: Find an index in an array such that the sum of
 elements to its left is exactly equal to the sum of elements to its right.*/
 #include <iostream>
 using namespace std;
 int indexsum(int arr[], int n){
   long long  totalsum=0;
  long  long leftsum=0;
   long  long rightsum;

    for (int i = 0;i<n;i++){
        totalsum+=arr[i];
    }
    for(int i=0;i<n;i++){
        rightsum = totalsum-leftsum-arr[i];
     if(rightsum ==leftsum){
            return i;
        }

    leftsum+=arr[i];
    }
    return -1;


 }
 int main(){
    int arr[] ={1,2,2,4,4,1};
    int n= sizeof(arr)/sizeof(arr[0]);
int result = indexsum(arr,n);
if(result!=-1){
cout<<"So the index which is in mid is: "<<result;
 }
 else cout<<" condistion not followed";
}
