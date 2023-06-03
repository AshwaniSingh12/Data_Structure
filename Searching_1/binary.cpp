#include<bits/stdc++.h>
using namespace std;
int solve(int n , vector<int> v , int t)
{
    int s,e,m;
    s=0;e=n;
    
    while(s<e)
    {
        m = (s+e)/2;
        if(v[m]==t) return m;
        else if(v[m]>t) e = m-1;
        else s = m+1;
    }
    return -1;

}
int main()
{
    int n;
    int target ;
    cout<<"Enter the total number of element : ";
    cin>>n;
    cout<<"Enter the "<<n<<" elements : ";
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<"Enter the number which you want to search :";
    cin>>target;
    int ans = solve(n,v,target);
    cout<<"The number is at the index = "<<ans<<endl;


}