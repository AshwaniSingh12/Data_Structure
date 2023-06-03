/*
        1
       22
      333
     4444
    55555
*/
#include<iostream>
using namespace std;
int main()
{
    int p=1;
    
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
        {
                cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<p;
        }
        p+=1;
        cout<<endl;
    }
}