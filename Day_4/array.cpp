//Reverse array using extra array
 #include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int revar[n];  
    
    for (int i = 0; i < n; i++) {
        revar[i] = arr[n - 1 - i];
    }

    
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << revar[i] << " ";
    }

    return 0;
}