/*
        1
      2 3
    4 5 6
  7 8 9 10

*/
#include<iostream>
using namespace std;
int main()
{
    
    int p=1;
    for(int i=1;i<=4;i++)
    {
        
        for(int j=1;j<=4-i;j++)
        {
                cout<<"  ";
        }
    
        for(int k=1;k<=i;k++)
        {
            
            cout<<p<<" ";
            p+=1;
            
        }
        
        cout<<endl;
    }
}