#include<iostream>
using namespace std;
int main()
{
    // while loop --->
    int a , i=1 ,s=0;
    cin>> a;
    while (i<=a)
    {
        s=s+i;
        cout<<i <<" " << endl;
        i+=1;
    }
    cout<< "sum of the number :"<<s;

    
}

// for sum of n numbers  sum = n/2(a+l)
    //a= starting number 
    //l= nth number 