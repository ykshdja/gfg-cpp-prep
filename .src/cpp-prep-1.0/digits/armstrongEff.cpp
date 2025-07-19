/**
 * @brief - Efficient Approach Armstrong number.
 * - Calculate the sum of indivisual digits.
 * Input 153 - 1*1*1 + 5*5*5 + 3*3*3 = 153
 * 
 */


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n=153;
    int temp=n;// store into temp
    int p=0;
    //Sum of Individual Digits
    while (n>0)
    {
        int rem = n%10;
        p = p + (rem*rem*rem);
        n=n/10;
    }
    if (temp==p)
    {
      cout<<"TRUE"<<endl;   /* code */
    }
    else{
        cout<<"FALSE"<<endl;
    }
    
    
    
    return 0;
}