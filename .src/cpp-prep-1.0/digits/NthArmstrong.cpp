/**
 * 
 * @brief - Revision needed
 * 
 */


#include<iostream>
#include<algorithm>
using namespace std;

int Ntharmstrong(int n){
    int count=0;
    //Upper Limit from Integer
    for (int i = 0; i < INT32_MAX; i++)
    { int num=i,rem,digit=0,sum=0;
      num=i; //copy value of num in num
      digit=(int)log10(num)+1;
      while (num>0){
        rem=num%10;
        sum=sum+pow(rem,digit);
        num=num/10;
      }
      if(i==sum){
        count++;
      }
      if(count==n){
        return i;
      }
      
    }
    
}


int main()
{
    int n=12;
    cout<<Ntharmstrong(n);
    return 0;
}