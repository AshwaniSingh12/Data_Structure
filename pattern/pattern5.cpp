#include<iostream>
using namespace std;
int main()
{
    /* pattern 10--->
        A B C
        A B C
        A B C
    */
    /*int n;
        cin>>n;
        
        int i=1;
        
        while(i<=n)
        {
            int j=1;
            while(j<=n)
            {
                cout<<char('A'+j-1);
                j+=1;
            }
            cout<<endl;
            i+=1;

        }
    */

    /* problem 11-->

        A B C
        D E F
        G H I
    */
/*
    int n;
    cin>>n;
    int i = 1;
    
    char ch='A';
    
    while(i<=n)
    {
        
        int j=1;
        while(j<=n)
        {
            
            cout<<char(ch);
            ch+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;

    }
    */


   /* problem-->
    a b c
    b c d
    c d e
    */

    int n ;
    cin>>n;
    int i = 1;
    
    while(i<=n)
    {
        
        int j=1;
        while(j<=n)
        {
            char ch='A'+i+j-2;   
            cout<<char(ch);
            
            j+=1;
        }
        cout<<endl;
        i+=1;

    }

}