#include<iostream>
#include<algorithm>
using namespace std;

int rightTriangle(int N)
{

    //Time - O(N^2)
    //Space - O(1)
    for (int i = 1; i <=N; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;   
    }
    return 0;
}

int InvRightTriangle(int N){

    //Time - O(N^2)
    //Space - O(1)
  for (int i = 0; i < N; i++)
  {
    for ( int j=i; j<=N-i+1; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
  }
  return 0; 
}

int EquilateralTriangle(int N){
    // ith Row has i elements and has (n-i) leading spaces.
    for (int  i = 1; i <N+1; i++)
    {
        // (n-i) spaces.
        for (int j = 0; j<N-i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j<i; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
        // i elements
    }
    return 0;
}

//ith row has n-i+1 and i-1 leading spaces.
int invertedEquilateralTriangle(int N)
{
    //Hint - Right Triangle (spaces) + Inverted Right Triangle (stars)
    for (int  i = 1; i <=N; i++)
    {
        //Leading spaces - Same as Right Triangle just with spaces.
        for (int  j = 1; j<i; j++)
        {
            cout<<" ";
        }
        //"*" just like the Inverted Right Triangle
        for (int  j = 1; j <=N-i+1; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
return 0;
}

void InvMirrorRightTriangle(int n)
{
    for (int i = 1; i <=n; i++)
    {
        //Leading spaces - Same as Right Triangle just with spaces.
        for (int  j = 1; j < i; j++)
        {
            cout<<"  ";
        }
        for (int j = i; j <= n; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;     
    }
    
}



int main()
{
    int N;cin>>N;
    rightTriangle(N);
    cout<<"_______________"<<endl;
    cout<<endl;
    cout<<"Equilateral"<<endl;
    cout<<endl;
    EquilateralTriangle(N);
    cout<<"_______________"<<endl;
    cout<<endl;
    cout<<"Inverted Equilateral"<<endl;
    cout<<endl;
    invertedEquilateralTriangle(N);
    cout<<"_______________"<<endl;
    cout<<endl;
    cout<<"Inverted Mirror Right Triangle"<<endl;
    InvMirrorRightTriangle(N);
    cout<<endl;
    return 0;
}