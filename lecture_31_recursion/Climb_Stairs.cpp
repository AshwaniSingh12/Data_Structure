#include<iostream>
using namespace std;
int solve(int n)
{
    if(n<0) return 0;
    if(n==0) return 1;
    int ans = solve(n-1) + solve(n-2);
    return ans;

}
int main()
{
    int n;
    cout<<"Enter the number of stairs : ";
    cin>>n;
    int ans = solve(n);
    cout<<ans<<endl;

}