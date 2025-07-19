/****
 * 
 * @brief - modulo technique -  Reverse the digit using mod(%)
 * @brief - Two-Pointer Technique.
 * @remarks - number --> String using to_string()
 * - Use Two Pointers 
 * 1 Pointer - Start of the String 
 * 2 Pointer - End of the String 
 *  Move these pointers to each other and Comparing the character they point to.
 * If all the characters matches -  Palindrome. 
 * 
 * 
 */






#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n=12221;
    int t=n;
    int rev=0;
    int result = 0;
    //Reverse number 
    while(t>0){
        int dig = t%10; // Last digit Extract
        rev = rev*10+dig;
        t/=10;
    }
if(n==rev)
{
    cout<<"Palindrom"<<endl;

}else{
    cout<<"Not a Palindrom"<<endl;
}
    return 0;
}