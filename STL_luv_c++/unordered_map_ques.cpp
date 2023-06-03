/*
    give N string and Q queries 
    in each query you are given a 
    string frequency of that string
    n<10^6
    |s| <= 100
    q <= 10^6
    8 abc def abc ghj jkl ghj ghj abc 2 abc ghj
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string , int> m;
    int n;
    cin>>n;
    for(int i = 0;i<n; i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
}