#include<iostream>
using namespace std;
void solve(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            swap(arr[i] ,arr[i+1]);
        }
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the total number of element in array : ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solve(arr,n);
    printarray(arr,n);

}