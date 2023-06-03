/*   problem 13--->
    a
    bc
    def
    ghij
*/
#include<iostream>
using namespace std;
int main()
{/*
    int n;
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n)
    {
        int j=1;
        
        while(j<=i)
        {
            cout<<ch<<" ";
            j+=1;
            ch+=1;
        }
        cout<<endl;
        i+=1;
    }*/


    /*   problem 14--->
    a
    bc
    cde
    defg
*/
    /*int n;
    cin>> n;
    int i=1;
    char v='A';
    while(i<=n)
    {
        
        int j=1;
        while(j<=i)
        {
            cout<<char(v+i+j-2);
            j=j+1;
            
        }
        cout<<endl;
        i+=1;
    }*/
    /*   problem 15--->
    d
    cd
    bcd
    abcd
*/
    int n;
    cin>> n;
    int i=1;
    
    while(i<=n)
    {
        
        int j=1;
        char v='A'+n-i;
        while(j<=i)
        {
            cout<<v;
            v+=1;
            j=j+1;
            
        }
        cout<<endl;
        i+=1;
    }



}