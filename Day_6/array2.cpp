//Find duplicates using sorting method

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {4, 2, 7, 2, 5, 4, 9, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
 sort(arr, arr + n);  

    cout << "Duplicates are: ";

 for(int i = 0; i < n - 1; i++) {
        if(arr[i] == arr[i + 1]) {
            cout << arr[i] << " ";

            
         while(i < n - 1 && arr[i] == arr[i + 1])
                i++;
        }
    }

    return 0;
}