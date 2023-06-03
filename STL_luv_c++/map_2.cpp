

#include<bits/stdc++.h>
using namespace std;
void print(map<string,string> &m)
{
    cout<<m.size() <<endl;
    for(auto &pr : m )
    {
        cout<<pr.first<<" "<<pr.second <<endl;
    }

}
int main()
{
    map<string , string > m;
    m["abcd"] = "abcd";  //s.size() * log(n)
    print(m);

}