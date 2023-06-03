// bubble sort 
#include<bits/stdc++.h>
using namespace std;
void solve(int n , vector<int> v)
{
    //int temp ;
    for(int i =0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            if(v[i]>=v[j])
            {
                swap(v[j] , v[i]);
            }
        }
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