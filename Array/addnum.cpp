/*The Set-up: Array represents a number, add 1 to it

text
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: 123 + 1 = 124

Input: [9,9,9]
Output: [1,0,0,0]
Explanation: 999 + 1 = 1000
*/
#include <iostream>
using namespace std;

int sumone(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        if(arr[n-1]<9){
            arr[n-1]++;

        }
        else{
            sizeof(arr)++;
            if(arr[i]==9){
                arr[i+1]==0;
            }
            arr[0]=1;
        }
    }
}