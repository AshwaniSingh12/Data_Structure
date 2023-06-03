#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v)
{
    int s=0;
    int e=v.size()-1;
    while(s<=e)
    {
        int temp =v[s];
        v[s]=v[e];
        v[e]=temp;
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v)
{
    cout<<"Array is "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector<int> v={2,5,9,3,8};
    
    vector<int> ans = reverse(v);
    print(ans);
    return 0;
    


}