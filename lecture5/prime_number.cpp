// Prime Numbers
#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=0;
    cout<<"Enter thhe value of n"<<endl;
    cin>>n;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            count+=1;
            break;
        }
    }
    if(count==0) cout<<"Number is Prime"<<endl;
    else cout<<"Number is not Prime"<<endl;
}
