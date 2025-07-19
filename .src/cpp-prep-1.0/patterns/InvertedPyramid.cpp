/**
 * @brief - Half-Inverted Triangle
__________
* * * *
* * *
* *
*
___________

1 2 3 4
1 2 3
1 2
1
___________

* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 


 * 
 */




#include<iostream>
#include<algorithm>
using namespace std;


int invertedPyramidNum(int n)
{ 
    for (int i = n; i>=n;--i)
    {
        for (int  j = 1; j<=i; ++j)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    


  return 0;
}
int invertedPyramid(int n){
    for (int i = n;i>=1; --i)
    {
        for (int j = 0; j<=i; ++j)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

int fullPyramid(int n){
   for (int i = n ; i>=1; --i)
   {
    for (int k = 0; k < n-i; ++k)
    {
        //cout<<"-";
    }
    
     for (int j = i; j<2*i-1; j++)
     {
        cout<<"*";
     }

     for (int j = 0; j < i-1; j++)
     {
        //cout<<"$";
     }
     
     cout<<endl;
   }

    return 0;
    
}


int main()
{
    int N;cin>>N;
   fullPyramid(N);
    invertedPyramid(N);
    invertedPyramidNum(N);
    return 0;
}