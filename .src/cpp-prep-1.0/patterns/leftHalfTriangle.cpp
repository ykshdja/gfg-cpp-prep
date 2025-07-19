/**
 * @brief - Rows=5
 ___________
    *
   **
  ***
 ****
*****
___________
 * 
 * 
 */


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{   
    int rows=5;
    for (int  i = rows; i > 0; i--)
    {
        for (int j = 0; j<rows+1; j++)
        {   
            if(j>=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        
    }
    
    
    return 0;
}