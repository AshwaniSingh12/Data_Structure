#include<bits/stdc++.h>
using namespace std;
int Sum(int n , int arr[])
{
    int sum = 0;
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }
    
    int rem = Sum(n-1,arr+1);
    sum = arr[0]+rem; 
    return sum;
}
int main()
{
    int n , arr[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = Sum(n,arr);
    cout<<"sum of the array element : "<<ans<<endl;
    
}