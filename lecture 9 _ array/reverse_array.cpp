#include<iostream>
using namespace std;
void reverse(int arr[] , int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int n;
    cout<<"Enter the total element of array : ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
}