#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> mat;
    int i ,j ,n,num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        vector<int> v;
        for(j=0;j<n;j++)
        {
            cin>>num;
            v.push_back(num);
        }
        mat.push_back(v);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}