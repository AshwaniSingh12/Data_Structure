#include<iostream>
using namespace std;
void solve(int arr[] , int n , int k)
{
    int temp[100];
    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
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
    cout<<"Enter total elements of array = ";
    cin>>n;
    int k;
    cout<<"Enter total bit roted in array = ";
    cin>>k;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solve(arr,n , k);
    print(arr,n);
}