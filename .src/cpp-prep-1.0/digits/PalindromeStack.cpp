/**
 * @brief - Palindrome using Stack (LIFO)
 * @remark -  Number --> PUSH (STACK) in reverse Order
 * compare digits of the stack with the corresponding digits.
 * 
 * 
 */



#include <iostream>
#include <algorithm>
#include <numeric>
#include<stack>
using namespace std;

int main() {
    int n = 1231;
    stack<int> Stack;
    int t = n;
    //Digits Insert from the last
    while (t>0)
    {   Stack.push(t%10);
        t/=10;
                /* code */
    }
    //Check the stack with the correspoding number
    while (!Stack.empty())
    {
        if (Stack.top()!=n%10) // Extract digit last digit using mod
        {
            cout<<"Not Palindrome"<<endl;
        }
        Stack.pop();
        n/=10;// move to the next digit to be extracted
    }
    cout<<"Palindrome"<<endl;
    return 0;
}
