/* problem 1 --->
    1234
    1234
    1234
    1234
*/
#include <iostream>
using namespace std;
int main()
{
    /*
    int i=1,n;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;   
    }
    */

    /* problem 2-->
        4321
        4321
        4321
        4321
    */

   
   int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<(n-j+1);
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    

    /* problem 3-->
        123
        456
        789
    /*
   int n;
   cin>>n;
   int count=1;
   int i=1;
   while(i<=n)
   {
    int j=1;
    while(j<=n)
    {
        cout<<count<<" ";
        count+=1;
        j+=1;
    }
    cout<<endl;
    i+=1;
   }
   */


}
