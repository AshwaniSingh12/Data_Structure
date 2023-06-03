#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,bit,ans=0,i=0;
    cout<<"enter decimal number = ";
    cin>>n;
    while(n!=0)
    {
        bit=n&1;
        n=n>>1;
        ans=(bit * pow(10,i))+ans; // in reverse form 
        
        i++;
    }
    cout<<"Answer is = "<<ans<<endl;

    /* -ve number to binary number
    
    int m,nbit,ans_n=0,j=0;

    cin>>m;*/

}