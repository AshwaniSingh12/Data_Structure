#include<iostream>
using namespace std;
int main()
{
    int a= 'a';
    cout<<a<< endl;
    unsigned int b=-122; // never gives -ve numbers in unsigned form 
    cout<<b<<endl;
    
}

/* how to store -ve numbers 
    steps-->
        1. ignore the -ve sign 
        2. convert into binary rep.
        3. takes 2's complement and store 
            2's complement-->
                0101
                1010 --> 1's complement 
                +  1
                -----
                1011  --> 2's complement 
*/
