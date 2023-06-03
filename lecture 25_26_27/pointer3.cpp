#include<iostream>
using namespace std;
int main()
{
    int i=3;

    int *t=&i ;
    cout<< (*t)++ <<endl;
    cout<< *t <<endl;
    
    // this incresase the value of memory address depent upon data type
    cout<<t<<endl;
    //cout<<t+1<<endl;
    cout<<t+5<<endl;
    /*
        0x7d2b1ffd44
        0x7d2b1ffd48
        0x7d2b1ffd58
    */

}