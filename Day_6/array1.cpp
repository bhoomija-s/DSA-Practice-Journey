//Find duplicates in array using nested loops

#include <iostream>
using namespace std;

int main() {
int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
int n = sizeof(arr) / sizeof(arr[0]);

cout << "Duplicate elements are: ";

 for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break; 
            }
        }
    }

    return 0;
}