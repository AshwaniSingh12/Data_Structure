#include<iostream>
using namespace std;
int  isprime(int n)
{
    int count=0;
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0) count++;
        if(count>2)
        break;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int res=isprime(n);
    if(res==0)
    
    {
        cout<<n<<" is prime Number "<<endl;
    }
    else {
        cout<<n<<" is not prime Number "<<endl;
    }
    return 0;

}