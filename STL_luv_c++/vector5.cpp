#include<bits/stdc++.h>
using namespace std;
// vector of vector 
void printVec(vector<int> &v)
{
    cout<<"Size of vector = "<<v.size()<<endl; 
    // v.size -> O(1) time 
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
}
int main()
{
    int N;
    cin>>N;
    vector<vector<int>> v;
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    // v[0].push_back(10);
    for(int i=0;i<v.size();i++)
    {
        printVec(v[i]);
    }
}