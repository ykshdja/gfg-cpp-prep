/**
 * @brief -  Simple method - 
 * LCM of 2 numbers - smallest number divisible by both numbers.
 * LCM of 15 and 20 is 60.
 * LCM of 15 and 25 is 75.
 * 15 = 5*3
 * 25 = 5*5
 * Union of all factors (With the highest Powers) = 5*5*3 = 75
 *  Highest Power of 3 = 1
 *  Highest Power of 5 = 2
 * LCM = 3(pow(1))x5(pow(2)) = 75
 * Time - O(a*b)
 * Space -  O(1)
 * - Approach -  Incerement the larger no. until the smaller 
 * number is divisible by the resultant
 * 
 * @brief - Using GCD -  a x b = LCM(a,b) * GCD (a,b)
 * LCM (a,b) = (a x b)/GCD(a,b)
 * Time -  O(log(min(a,b)))
 * Space - O(log(min(a,b))) 
 * 
 * 
 * 
 * 
 * 
 * 
 */



#include<iostream>
#include<algorithm>
typedef long long ll;
typedef long double ld;
typedef long int li;

using namespace std;

//Recursive Function
long long  gcd (long long int a, long long  int b){
    if(b==0) return a;

    return gcd (b,a%b);
}

long long lcm(int a ,int b){
    return (a/gcd(a,b)*b);
}

int findLCM(int a, int b)
{
    int large = max(a,b);
    int small = min(a,b);
    for(int i=large;;i+=large){ //Loop runs like an infinite loop(until breaks)
        if(i%small==0){
            return i;
        }
    }
}





int main()
{
    int a = 15, b = 20, max_num, flag=1;
    max_num = (a>b)?a:b; // Max of a and b.
    while(flag){//if max is the LCM(div by a & b)
        // if not increment
        if(max_num%a==0 && max_num%b==0){
            cout<<"LCM of "<<a<<" and "<<b<<" is "<<max_num<<endl;
            break;
        }
        ++max_num;
    }
    cout<<" LCM ::" << lcm(a,b);
     cout<<" LCM ::" << findLCM(a,b);
    return 0;
}