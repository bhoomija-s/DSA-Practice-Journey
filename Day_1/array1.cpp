//wap an array and a target number value , find any two numbers in the array 
//that add up to the target number value and print them
#include <iostream>
#include <unordered_set> //data structure from cpp STL
using namespace std;

bool LIneararr(int arr[],int n,int target){
    unordered_set<int> s;
    for (int i = 0; i<n; i++){
        if(s.count(target-arr[i])) { //checks if x exist in set
         cout << arr[i] << " and " << target - arr[i] << endl;
            return true;
        }
        s.insert(arr[i]); //it stores the current value 
    }
    return false; // when no pair found 
 }


int main(){
    int arr[] = {2,7,11,15};
    int n = 4;
    int target = 9;

if(!LIneararr(arr,n,target)){
    cout<<"No pair found";
}
}
