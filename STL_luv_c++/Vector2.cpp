#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v)
{
    cout<<"Size of vector = "<<v.size()<<endl; 
    // v.size -> O(1) time 
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    v.push_back(1);
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(5);
    printVec(v);

   /* v.pop_back(); // remove from last in vector comp -- O(1) 
    printVec(v);*/

    vector<int> v2=v; // copy vector in another vector compl-- O(n)
    v2.push_back(8);
    printVec(v);
    printVec(v2);


}