//Compare linear vs binary search (count steps for both)

#include <iostream>
using namespace std;

// Linear Search
int linearSearch(int arr[], int n, int key, int &steps) {
    steps = 0;
    for(int i = 0; i < n; i++) {
        steps++;
        if(arr[i] == key)
            return i;
    }
    return -1;
}

// Binary Search
int binarySearch(int arr[], int n, int key, int &steps) {
    int left = 0, right = n - 1;
    steps = 0;

    while(left <= right) {
        steps++;
        int mid = left + (right - left) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;

    cout << "Enter number to search: ";
    cin >> key;

    int linearSteps, binarySteps;

    int linIndex = linearSearch(arr, n, key, linearSteps);
    int binIndex = binarySearch(arr, n, key, binarySteps);

    cout << "Linear Search:";
    cout << "Index = " << linIndex << " Steps = " << linearSteps << endl;

    cout << "Binary Search:";
    cout << "Index = " << binIndex << "  Steps = " << binarySteps << endl;

    return 0;
}
