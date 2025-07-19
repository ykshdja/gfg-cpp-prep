/**
 * @brief - Prime numbers between given Range - 
 * For Example - 2,3,4,5,7,11
 * @remarks - 
 * 1. Trial Division Method
 * 2. Optimized Trial Division Method
 * 3. Sieve of Eratosthenes
 *  -  Trial Division - 
 * Check Primality of Each number in the given Range [l,r] using trial Division
 * Divide with every number from 2 to n-1, where n is the given number.
 * //Time - O(R^2)
 * 
 * - Optimized Trial Division  - 
 * "The smallest factor of a number greater 
 * than one cannot be greater than the square root of that number"
 * 
 */



#include<iostream>
#include<algorithm>
using namespace std;
//Time O(R^2)
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for (int  i = 2; i < n; i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return false;
}

void findPrimes(int l, int r){
    bool found = false;
    for (int i = l; i <=r; i++)
    {
        if(isPrimeOptimized(i)){
            cout<<i;
            found=true;
        }
    }
    if(!found){
        cout<<"No Prime within the range::"<<endl;
    }
    
}
// Time - O(r*(sqrt(r)))
//Space - O(1)
bool isPrimeOptimized(int n){
    if(n <= 1 ){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for (int i = 3; i * i <= n; i += 1)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int l,r;cin>>l>>r;
    findPrimes(l,r);
    
    return 0;
}