// check given array is sorted or not 
#include<bits/stdc++.h>
using namespace std;
bool solve(int n , vector<int> &v)
{
    if(n==0 || n==1) return true;
    if(v[0]>v[1]) return false;
    else return solve(n-1 , v);

}
int main()
{
    int n;
    cout<<"Enter the total number of element :";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements :";
    for(int i =0;i<n;i++)
    {
        cin>>v[i];
    }
    bool res = solve(n,v);
    if(res) cout<<"Given Array is Sorted !"<<endl;
    else cout<<"Given Array is not Sorted !"<<endl;

}