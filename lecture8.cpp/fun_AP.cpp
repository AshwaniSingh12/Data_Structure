#include<iostream>
using namespace std;
int AP(int n)
{
    int res=((3*n)+7);
    return res;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int res=AP(n);
    cout<<res<<endl;
}