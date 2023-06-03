#include<iostream>
using namespace std;
void dummy(int n)
{
    n++;
    cout<<"n is "<<n<<endl;
}
int main()
{
    int a;
    cin>>a;
    dummy(a);
    cout<<"Number n is "<< a <<endl;

}