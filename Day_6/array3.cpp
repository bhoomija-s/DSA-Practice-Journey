//Remove duplicates from sorted array (in-place)

#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if(n == 0) return 0;
 int i = 0; 
 for(int j = 1; j < n; j++) {
        if(arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1; 
}

int main() {
    int arr[] = {1,1,2,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    n = removeDuplicates(arr, n);

    cout << "Array after removing duplicates:";
    cout<<endl;
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}