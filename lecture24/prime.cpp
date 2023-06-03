#include<iostream>
using namespace std;
int Prime(int n)
{

    int flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
int main()
{
    int n;
    int flag=0;
    cout<<"Enter the number: ";
    cin>>n;
    int res=Prime(n);
    if(res==0)
    {
        cout<<"Number is prime "<<endl;
    }
    else cout<<"Number is not prime "<<endl;
}