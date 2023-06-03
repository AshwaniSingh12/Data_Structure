// selection sort 
#include<bits/stdc++.h>
using namespace std;
void solve(int n , vector<int> v)
{
    
    for(int i =0 ;i<n;i++)
    {
        int min = i;
        for(int j = i+1;j<n;j++)
        {
            if(v[j]<v[min])
            {
                min = j;
            }
        }
        swap(v[min],v[i]);
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