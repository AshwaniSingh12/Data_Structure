// insertion sort 
#include<bits/stdc++.h>
using namespace std;
void solve(int n , vector<int> v)
{
    for(int i= 1;i<n;i++)
    {
        int temp = v[i];
        int j = i-1;
        for(;j>=0;j--)
        {
            if(v[j]>temp)
            {
                v[j+1]=v[j];
            }
            else break;
        }
        v[j+1] = temp;
    }
    for(int i =0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int n ;
    cout<<"Enter the total number of elements :";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elments :";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    solve(n,v);
}