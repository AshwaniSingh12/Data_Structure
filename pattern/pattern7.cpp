/*   problem 13--->
        *  
       **
      ***
     ****
    *****
*/
#include<iostream>
using namespace std;
int main()
{
    /*
    int n;
    cin>> n;
    int i=1;
    
    while(i<=n)
    {
        int space=n-i;
        
        while(space)
        {
            cout<<" ";
            space-=1;    
        }
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }*/

    /*problrm 14-->
        ****
        ***
        **
        *
    */
    int n ;
    cin>>n;
    int i=1;
    while(i<=n-i)
    {
        int j=1;
        while(j<n-1)
        {
        cout<<"*";
        j+=1;
        }
        cout<<endl;
        j+=1;
    }
}