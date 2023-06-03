// Check if Array Is Sorted and Rotated
#include<iostream>
using namespace std;
int solve(int arr[] , int n , int k)
{
    int count =0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]> arr[i])
        {
            count++;
        }
    }
    if(arr[n-1]>arr[0])
    {
        count++;
    }
    return count<=1;
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
    int res = solve(arr,n , k);
    if(res==1)
    {
        cout<<true;
    }
    else cout<<false;
    
}