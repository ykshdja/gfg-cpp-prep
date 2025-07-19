/***
 * @brief -  2 Pointer technique 
 * 
 * 
 */


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n = 56665;
    //Convert number to string 
    string s = to_string(n);
    int l = 0; // Start 
    int r = s.size()-1; //End 

    //Compare both character
    // pointer l and r;
    while (l<r){
        if (s[l]!=s[r]){
            cout<<"Not Palindrome"<<endl;
        }   
        l++,r--;
         // move the pointer to each other 
    }
   cout<<"Palindrome"<<endl;
    return 0;
}