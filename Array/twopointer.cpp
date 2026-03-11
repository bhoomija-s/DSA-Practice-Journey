/*: Valid Palindrome (Tests: Can you ignore non-letters?)
Input: "A man, a plan, a canal: Panama"
Output: true
Why: Reading left to right equals right to left ignoring punctuation
Think: Left pointer at start, right at end. Skip non-letters.*/
#include <iostream>
#include <cctype>
using namespace std;
bool palindrom(string s){
    int first = 0;
    int last = s.length()-1;
    while(first<last){ //no need to compare same character so loop stops quick
       while (first<last && !isalnum(s[first])){
        first++;
       }
       while ( first<last && !isalnum(s[last])){
        last--;
       }

       if ( tolower(s[first])!=tolower(s[last])){
        return false;
       }
       first++;
       last--;
       }
        return true;
    }
   

int main(){
    string s="A man, a plan, a canal: Panama";  // don't write this as an array
    int n = s.length();
     int result= palindrom(s);
    if(palindrom(s)){
        cout<<"its a palindrom";
    }
    else  cout<<"its not a palindrom";
}