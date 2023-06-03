#include<iostream>
using namespace std;
void solve(int n , string arr[] )
{
    if(n==0) return ;
    int digit = n%10;
    n=n/10;
    cout<<arr[digit] << " ";
    solve(n , arr);
}
int main()
{
    string arr[10]={"Zero" , "One" , "Two" , "Three" , "Four" ,
    "Five" , "Six" , "Seven" , "Eight" , "Nine"};
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<n<<endl;

    solve(n,arr);

}