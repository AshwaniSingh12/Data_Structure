#include<iostream>
using namespace std;
void update2(int& n)
{
    n++;
}
void update1(int n)
{
    n++;
}
int main()
{
    /*int i=5;
    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    */
   int n=6;
   cout<<"before "<<n<<endl;
   update1(n);
   cout<<"After "<<n<<endl;
   update2(n);
   cout<<"After and after "<<n<<endl;

}