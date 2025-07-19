/**
 * @brief -
- Pattern row=5
________________
*        
* * 
* * * 
* * * * 
* * * * *
________________
 * Time - O(N^2)
 * 
 */



#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int rows=5;
    for (int  i = 0; i < rows+1; i++)
    {
        for (int  j = 1; j < i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;  
    }
    
    
    return 0;
}