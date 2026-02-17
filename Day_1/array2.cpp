// Checks if array is sorted
#include <iostream>
using namespace std;

bool arrsorted(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i-1]) {
            return false;   // not sorted
        }
    }
    return true;            // sorted
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    if(arrsorted(arr, n))
        cout << "Array is sorted";
    else
        cout << "Array is NOT sorted";
}
