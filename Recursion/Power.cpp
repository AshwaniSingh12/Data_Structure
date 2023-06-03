#include<bits/stdc++.h>
using namespace std;
int solve(int n , int p)
{
    if(p==0) return 1;
    if(p==1) return n;
    int ans = solve(n , p/2);
    if(p%2==0)
    {
        return ans*ans;
    }
    else return n*ans*ans;
}
int main()
{
    int n;
    int p;
    cin>>n>>p;
    cout<<solve(n,p)<<endl;
}