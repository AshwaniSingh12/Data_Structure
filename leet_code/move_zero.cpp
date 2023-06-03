#include<iostream>
#include<vector>
using namespace std;
void solve(int arr[] , int n)
{
    int nonZero=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j] != 0)
        {
            swap(arr[j] , arr[nonZero]);
            nonZero++;
        }
    }
}
void print(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solve(arr,n);
    print(arr,n);
}