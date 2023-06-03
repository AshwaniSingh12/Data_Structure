#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m)
{
    cout<<m.size() <<endl;
    for(auto &pr : m )
    {
        cout<<pr.first<<" "<<pr.second <<endl;
    }

}
// maps have unique key
// if we reapeat any key the it change replace old value with new one  
int main()
{
    map<int , string> m;
    m[1] = "abc"; // O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    map<int , string> :: iterator it;
    for(it = m.begin();it != m.end() ; ++it)
    {
        cout<<(*it).first <<" "<<(*it).second<<endl;
    }   
    cout<<"print using function" <<endl;
    

    cout<<"function in map "<<endl;
    auto t = m.find(3); // to return that key value O(log(n))
    if(t == m.end()) cout<<"NO Value" ;
    else cout<<(*t).first<<" "<<(*t).second<<endl;

    m.erase(3); // to delete the value  O(log(n))
    // we don't delete unexist key 

    m.clear(); // clear the map O(log(n))
    print(m);


                                                                                                                                                                                                                                                                    
}