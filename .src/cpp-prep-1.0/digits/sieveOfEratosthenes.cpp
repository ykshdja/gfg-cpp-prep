/***
 * @brief - Sieve of Eratosthenes 
 * @remarks - 
 * Iteratively MARK THE MULTIPLES of each number
 * starting from the lower limit l to upper limit r.
 * All the unmarked number in range will be prime numbers.
 * @details - 
 * Find all prime numbers less than or equal to n.
 * - initialize a boolean Array prime [0..n]
 * - populate the array with true values, except a[0] and a[1] (not prime)
 * - Start from 2, Smallest Prime.
 * - for each number P from 2 to sqrt(n)
 * -- if P is marked a true(prime).
 * --  Mark all the multiple of P a not prime(false).
 * -- Start from P*P (Since Smaller Multiples have already been marked by smaller primes.)
 * - After the loop ends, all the remaining True entries in prime 
 * represent prime.
 * 
 * 
 */

 #include<iostream>
 #include<algorithm>
 using namespace std;
 const int N=1e5+10;
 const int N = 1000002;
 bool primecheck[N];

void sieve(){
    primecheck[0]=1;
    primecheck[1]=1;
    for (int i = 2; i <=N; i++)
    {
        if(primecheck[i])continue; //If its true (marked)
        for (long long  j = (long long)i*i;j<=N;j+=i){
            primecheck[j]=1;
        } 
    }
}




 int main()
 {
    sieve();
    int n;cin>>n;
    for (int  i = 1; i <=n ; i++)
    {
        if(!primecheck[i]){
            cout<<i<<" ";
        }
    }
    
     
     return 0;
 }