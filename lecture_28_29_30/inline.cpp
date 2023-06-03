#include<iostream>
using namespace std;
inline int getmax(int& a, int& b )
{
    return (a>b) ? a : b;
}
int main()
{
    int a=1,b=2;
    int ans;
    /*if(a>b)
    {
        ans=a;
    }
    else{
        ans=b;
    }*/
    ans=getmax(a,b);
    cout<<ans<<endl;
    a+=3;
    b+=1;
    ans=getmax(a,b);
    cout<<ans<<endl;
}