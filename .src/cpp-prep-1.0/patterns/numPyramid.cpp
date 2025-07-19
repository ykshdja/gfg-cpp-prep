/** 
 * @brief - 
_____________
1                                               
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 


1
2 2 
3 3 3
4 4 4 4
5 5 5 5 5


1
12
123
1234
12345
_____________
 * 
 * 
 * 
 */


#include<iostream>
#include<algorithm>
using namespace std;

int Pattern_1(int n){
    int number=1;
    int rows, col;
    for ( rows = 0; rows<=n;rows++)
    {
        for (col = 0; col<rows ;col++)
        {
            cout<<number<<" ";
            number++;
        }
        cout<<"\n";
    }
    
}
int Pattern_2(int n)
{   int rows, cols;
    for (rows=1;rows<=n;rows++)
    {
        for (cols=1;cols<rows+1;cols++)
        {
            cout<<rows<<" "; //Row Change 
        }
        cout<<endl;
    }
    
 
 return 0;
}
int Pattern_3(int n){
    int rows;
    int cols;
      for (rows=1;rows<=n;rows++)
    {
        for (cols=1;cols<rows+1;cols++)
        {
            cout<<cols<<" "; //Col Change
        }
        cout<<endl;
    }
    return 0;
}



int main()
{
    int n;cin>>n;
    Pattern_1(n);
    cout<<endl;
    Pattern_2(n);
    cout<<endl;
    Pattern_3(n);
  return 0;
}