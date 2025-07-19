/**
 * @brief - Sum of Fibonacci number at Even Indexes upto N Terms.
 * @remarks -  N positive numbers, 
 * Find -  F2+F4+F6+F8+....+F(2n).
 * Fibonacci numbers - 
 * 0,1,1,2,3,5,8,13,21,34.....
 * @details - 
 * - Method 1 - Solve directly by finding all the fibonacci numbers and 
 * adding up the even indices. 
 * Time - O(n)
 * Space - O(n)
 * - Method 2 - Summation Formula 
 * 2x∑(Even(fib)) = ∑(Fib) - ∑ (F1-F2+F3-F4+....+F2n)
 * ∑(Even(fib)) = F(2n+1)-1
 * 
 */


#include<iostream>
#include<algorithm>
using namespace std;

int calculateEvenSum(int n){
    if(n<=0){
        return 0;
    }
    int fibo[2*n+1]; // int array of length(2n+1)
    fibo[0] = 0, fibo[1]=1;//0,1
    int sum=0;
    //add the terms
    for (int  i = 2; i < 2*n+1; i++)
    {
        fibo[i] = fibo[i-1]+ fibo[i-2];
        if(i%2==0){
            sum+=fibo[i];
        }
        
    }
    return sum;
}


int main()
{
    int n=8;
    cout<<"fibonacci sum of Even : "<<calculateEvenSum(n)<<endl;
    cout<<endl;
    return 0;
}