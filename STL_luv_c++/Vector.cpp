#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
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
    int a[10]; // array with 10 size 
    int size;
    vector<int> v; // vector with unlimited size 
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x);
    }
    printVec(v);
}