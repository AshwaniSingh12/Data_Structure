/*
    (a+b)%m = a%b + b%a 
    a%m - b%m = (a-b)%m
    a%m * b%m = (a*b)%m 


    Fast Exponentiation -->

*/
#include<iostream>
using namespace std;
int solve(int a, int b , int m)
{
    int res = 1;
    while(b>0)
    {
       if(b&1) // odd case
       {
            res=(1LL*(res)*(a%m))%m;
       } 
       a=(1LL * (a%m)*(a%m))%m;
       b = b>>1;
    }
    return res;
}
int main ()
{
    int a,b,m;
    cout<<"Enter the value of a , b and m :";
    cin>>a>>b>>m;
    int ans = solve(a,b,m);
    cout<<"Answer is : "<<ans<<endl;
}

/*
    pigeonhole 
    catalon
    inclusion - exclusion 
*/