#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int , string> &m)
{
    cout<<m.size() <<endl;
    for(auto &pr : m )
    {
        cout<<pr.first<<" "<<pr.second <<endl;
    }

}
int main()
{
    unordered_map<int , string> m;
    m[1] = "abc";
    m[2] = "afj";
    m[3] = "rgr";
    m[4] = "a";
    m[5] = "cde"; // it use inbuild hash 
    // in this calculate hash value 
    // O(1) --> complexity
    // only basic datatype use in this

    auto it = m.find(7);
    if(it!= m.end())
        m.erase(it);
    print(m);
}