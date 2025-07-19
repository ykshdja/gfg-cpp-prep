/**
 * @brief - Prep Sheet with cpp examples mostly from gfg(geeksforgeeks)
 * @date - 01/07/2025
 * @remarks - gcd using simple method / Euclidean/ Inbuilt Functions
 * @remark - gcd of 2 no. is the largest no. that divides 2 no.s
 * 
 * 
 */
/**
 * @brief -  Simple Method - 
The idea is to find the COMMON DIVISOR by 
checking the divisibility of both numbers using the (%) MODULO operator with all 
the numbers starting from the minimum number to 1.
 * - Time Complexity - O(min(a,b)) - 
    Space - O(1)
 *
 *
 * @brief - Euclidean Method  - 
 *  More Efficient - 
 * GCD of 2 no.s remains the same if the greater number is 
 * replaced by the difference between the 2 numbers.
 * 
 * 
 */



#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;


int gcd_1 (int a,int b)
{
    int res = min(a,b);
    //Find the minimum of a and b.
    //Test divisibility test with all no. from min(a,b) to 1
    while(res>1){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
        
    }
    return res;

}

int gcd_2_recursive(int a, int b){ 
    //Euclidean
    // GCD(a,b) = GCD(b,a mod b)
    return b == 0 ? a : gcd_2_recursive(b,a%b);
}


int main()
{ 
   int a=48,b=18;
   std::cout << "Program started..." << std::endl;
   std::cout<<gcd_1(a,b);
   strd::cout<<gcd_2_recursive(a,b);
   //std::cout<<__gcd(a,b)<<endl;
    std::cin.get();
    return 0;
}