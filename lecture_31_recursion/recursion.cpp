/* recursion -> when a function call itself 
*/
#include<iostream>
using namespace std;
int solve(int m , int n)
{
    if(m==1)
    return n;
    int sum = solve((m-1),n);
    int ans = n*sum;
    return ans;
    
   
}
int main()
{
    int m,n;
    cout<<"enter the base number : ";
    cin>>n;
    cout<<"enter the power number : ";
    cin>>m;
    int res = solve(m,n);
    cout<<"output is "<<res;
}