//Find missing number in unsorted array using hash set

#include <iostream>
#include <unordered_set>
using namespace std;

int findMissing(int arr[], int n){
    unordered_set<int> s;

for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }

   
    for(int i=1;i<=n+1;i++){
        if(s.find(i) == s.end()){
            return i;
        }
    }
    return -1; 
}

int main(){
    int arr[] = {3,7,1,2,8,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Missing number = "<<findMissing(arr,n);
}