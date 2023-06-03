#include<iostream>
using namespace std;
int power(int n,int m)  // we can use diffrent name of variable 
{ 
    int ans=1;
    for(int i=1;i<=m;i++)
    {
        ans=ans*n;
    }
    return ans;

}
int main()
{
    int a ,b;
    cin>>a>>b;
    int value=power(a,b);
    cout<<"answer is "<< value << endl;
    return 0;

}