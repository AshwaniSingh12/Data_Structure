#include<bits/stdc++.h>
using namespace std;
// vector of pair 
void printVec(vector<pair<int,int>> &v)
{
    cout<<"Size of vector = "<<v.size()<<endl; 
    // v.size -> O(1) time 
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    cout<<endl;
}
int main()
{
    vector<pair<int,int>> v = {{1,2},{2,3},{3,4}};
    printVec(v);
    vector<pair<int,int>> v2;
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int x,y;
        cin>>x>>y;
        v2.push_back({x,y});
    }
    printVec(v2);


}