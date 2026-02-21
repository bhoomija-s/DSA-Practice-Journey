//Find all missing numbers in array (multiple missing)

#include <iostream>
#include <unordered_set>
using namespace std;

void findMissing(int arr[], int n){
    unordered_set<int> s;

    for(int i=0;i<n;i++)
        s.insert(arr[i]);

    for(int i=1;i<=n;i++){
        if(s.find(i) == s.end())
            cout<<i<<" ";
    }
}

int main(){
    int arr[] = {1,3,5,8};
    int n = 8; 

    findMissing(arr,n);
}