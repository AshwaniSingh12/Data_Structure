#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;
    cout<<"a&b: "<<(a&b) << endl;
    cout<<"a|b: "<<(a|b) << endl;
    cout<<"~a: "<<(~a) << endl;
    cout<<"a^b: "<<(a^b) << endl;
    cout<<endl; 

    // left shift and right shift  
    cout<<(17>>1)<<endl;
    cout<<(19<<2)<<endl;
    cout<<endl;

    //pre/post increment/decrement

    int i=7;
    cout<<(++i)<<endl;
    cout<<(i++)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl; 

}