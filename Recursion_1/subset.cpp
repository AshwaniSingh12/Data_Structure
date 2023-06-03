#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> v , vector<int> out , int i , vector<vector<int>> &ans)
{
    if(i>=v.size())
    {
        ans.push_back(out);
        return ;
    }
    // exclude 
    solve(v,out,i+1,ans);

    // include 
    int e=v[i];
    out.push_back(e);
    solve(v,out,i+1,ans);
}
int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<vector<int>> ans;
    vector<int> output;
    solve(v,output,0,ans);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"size of result array : "<<ans.size();
}