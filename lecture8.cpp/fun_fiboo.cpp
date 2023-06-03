#include<iostream>
using namespace std;
void fibbo(int n)
{
    int a=0;
    int b=1;
    for(int i=1;i<=n-2;i++)
    {
        int sum=a+b;
        cout<<sum<<"  ";
        a=b;
        b=sum;
    }

}
int main()
{
    int n;
    int a=0;
    int b=1;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<a<<"  "<<b<<"  ";
    fibbo(n);
    return 0;

}