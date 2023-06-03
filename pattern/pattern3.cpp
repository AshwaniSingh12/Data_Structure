/*  problem 4--->

    *
    **
    ***
    ****

*/
#include<iostream>
using namespace std;
int main()
{
    /*int i=1;
    while(i<=4)
    {
        int j=1;
        while(j<=i){
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }*/

    /* problem 5-->
        1
        22
        333
        4444

    */

   /*int i=1,n;
   cin>>n;
   while(i<=n)
   {
        int j=1;
        while(j<=i)
        {
            cout<<i;
            j+=1;
        }
        cout<<endl;
        i+=1;
   }*/

   /*  problem 6--->
        1
        23
        456
        78910
   */
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n)
    {
        int j=1;
        
        while(j<=i)
        {
            cout<<count<<" ";
            j+=1;
            count+=1;
        }
        cout<<endl;
        i+=1;
    }


}