#include<bits/stdc++.h>
using namespace std;
void solve(string v , string out , int i , vector<string> &ans)
{
    if(i>=v.length())
    {
        if(out.length()>0) 
        {
            ans.push_back(out);
        }
        return ;
    }
    // exclude 
    solve(v,out,i+1,ans);

    // include 
    char e=v[i];
    out.push_back(e);
    solve(v,out,i+1,ans);
}
int main()
{
    string v;
    cout<<"Enter the string : ";
    cin>>v;
    vector<string> ans;
    string output="";
    solve(v,output,0,ans);
    for(int i =0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    cout<<endl;
    cout<<"size of result array : "<<ans.size();
}