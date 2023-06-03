/*
    nCr= (n!)/(r!*(n-r)!)
*/
#include<iostream>
using namespace std;
int fact(int a)
{
    int ans=1;
    for(int i=a;i>=1;i--)
    {
        ans=ans*i;
    }
    return ans;
}
int nCr(int n ,int r){
    int num=fact(n);
    int denom=fact(r)*fact(n-r);
    return num/denom;

}
int main()
{
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    cout<<"Answer is : "<<nCr(n,r)<<endl;
}