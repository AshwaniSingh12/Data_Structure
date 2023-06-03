#include<iostream>
using namespace std;
bool even(int a )
{
    
    if(a&1) return 0;
    else return 1;
}
int main()
{
    int num ;
    cout<<"Enter the number: ";
    cin>>num;
    if(even(num)){
        cout<<"Number is even "<<endl;
    }
    else{
        cout<<"Number is odd "<<endl;
    }
    return 0;

}