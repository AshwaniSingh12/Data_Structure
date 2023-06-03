#include<iostream>
using namespace std;
int main()
{
    /*
       1
      121
     12321
    1234321
    */
    int n;
    cin>> n;
    int i=1;
    
    while(i<=n)
    {
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j+=1;
        }
        int start=i-1;
        while(start)
        {
            cout<<start;
            start-=1;
        }
        cout<<endl;
        i+=1;

    }

}