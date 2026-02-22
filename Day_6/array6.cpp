//Find first repeating element in array

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
 unordered_set<int> s;
    int first = -1;
 for(int i = n-1; i >= 0; i--) {
        if(s.find(arr[i]) != s.end())
            first = arr[i];
        else
            s.insert(arr[i]);
    }

 if(first != -1)
        cout << "First repeating element: " << first;
 else
        cout << "No repeating element";
}