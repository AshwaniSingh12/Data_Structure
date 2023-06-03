// calculator using switch case 
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
    char ch;
    cout<<"Enter the operation which you want to perform = ";
    cin>>ch;
    switch (ch)
    {
        case '+' : cout<<"sum = "<<a+b<<endl;
            break;
        case '-' : cout<<"sub = "<<a-b<<endl;
            break;
        case '*' : cout<<"mul = "<<a*b<<endl;
            break;
        case '%' : cout<<"div = "<<a%b<<endl;
            break;
        default : cout<<"Enter the valid operation";

    } 
}