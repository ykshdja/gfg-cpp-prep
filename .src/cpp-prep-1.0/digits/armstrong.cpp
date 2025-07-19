/**
 *
 * @brief - 
 * Armstrong number of Order(n).
 * abcd = pow(a,n)+pow(b,n)+pow(c,n).....
 * @remarks - Input 
 * 153 is an armstrong number 
 * 1*1*1 + 5*5*5 + 3*3*3 = 153
 * 120 - Not an Armstrong
 * 1*1*1 + 2*2*2 + 0*0*0 = 9
 *  Approach - 
 * 1. Count the number of digits(find the order.)
 * no. of digit = n for 153 (n=3)
 * for every digit r in input x, compute r(pow(n)).
 * r=1,r=5,r=3
 * Sum of all the values == n, return true, else false.
 * 
 **/

#include<iostream>
#include<algorithm>
using namespace std;
//Calculate x, raised to the power pow
int power(int x, unsigned int pow)
{
    if(pow==0){
        return 1;
    }
    if (pow%2==0)
    {
        return (power(x,pow/2)*power(x,pow/2));
    }
    
  return (x*(power(x,pow/2)*power(x,pow/2)));
}

int order(int x,int y)
{
    int n=0;
    while (x)
    {
       n++;
       x=x/10;             /* code */
    }
    
  return n;
}

bool isArmstrong(int x){
    int n = order(x);
    int temp=x,sum=0;
    while(temp){
        int r = temp%10;
        sum+=power(r,n);   
        temp=temp/10;
    }
    //If Satisfy Armstrong conditions
    return (sum==x);
}


int main()
{
    int x=153;
    cout<<isArmstrong(x)<<endl;
    int y = 1536;
    cout<<isArmstrong(y)<<endl; 
    return 0;
}