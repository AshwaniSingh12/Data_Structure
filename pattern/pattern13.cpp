/* 
    12345
     2345
      345
       45
        5

*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        int p=1;
        for(int j=1;j<=5;j++)
        {
            if(i>j){
                cout<<" ";
            }
            else cout<<p;
            p+=1;
            
        }
        
        
        cout<<endl;
    }
}