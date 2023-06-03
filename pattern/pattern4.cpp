/*   problem 7--->
    1
    23
    345
    4567
*/
#include<iostream>
using namespace std;
int main()
{
    /*int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int value=i;
        while(j<=i)
        {
            cout<<value<<" ";
            j+=1;
            value+=1;
        }
        cout<<endl;
        i+=1;
    }*/

    /* problem 8-->
        1
        21
        321
        4321
    */
   /*int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int value=i;
        while(j<=i)
        {
             cout<<(i-j+1);
            //cout<<value<<" ";
            j+=1;
            //value-=1;
        }
        cout<<endl;
        i+=1;
    }*/


    /* problem 9-->
        AAA
        BBB
        CCC
    */

        int n;
        cin>>n;
        
        int i=1;
        
        while(i<=n)
        {
            int j=1;
            while(j<=n)
            {
                cout<<char('A'+i-1);
                j+=1;
            }
            cout<<endl;
            i+=1;

        }
    
   
}