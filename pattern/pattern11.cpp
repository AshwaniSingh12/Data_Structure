/* 
 
 11111
  2222
   333
    44
     5

*/
#include<iostream>
using namespace std;
int main()
{
    int p=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i>j){
                cout<<" ";
            }
            else cout<<p;
            
        }
        p+=1;
        
        cout<<endl;
    }
}