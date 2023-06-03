#include<iostream>
using namespace std;
int main()
{
    pair<int, string> p1,p2;
    p1 = make_pair(2,"abc"); // internal function 
    cout<<p1.first<<" "<<p1.second<<endl;
    p2 = {3,"xyz"};
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int, string> &p3 = p1;
    p3.first = 5;
    cout<<p1.first<<" "<<p1.second<<endl;

    // pair array 
    int a[] = {1,2,3};
    int b[] = {2,3,4};

    pair<int,int>p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0] , p_array[2]);
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    // pair as input 
    pair<int,string> p5;
    cin>>p5.first;
    cout<<p5.first<<endl;
    cin>>p5.second;
    cout<<p5.second<<endl;


}