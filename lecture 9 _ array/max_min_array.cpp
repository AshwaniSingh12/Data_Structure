#include<iostream>
using namespace std;
int maximum(int arr[], int size)
{
    int maxi=INT_MIN;
    for(int i=0;i<size;i++)
    {
        maxi=max(maxi,arr[i]);
        //if(arr[i]>max)  max=arr[i];
        
    }
    return maxi;

}
int minimum(int arr[], int size)
{
    int mini=INT_MAX;
    for(int i=0;i<size;i++)
    {
        //if(arr[i]<min)  min=arr[i];
        mini=min(mini,arr[i]);
    }
    return mini;

}
int main()
{
    int n;
    cout<<"Enter the array size : ";
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=maximum(arr,n);
    int min=minimum(arr,n);
    cout<<"maximum number is : ";
    cout<<max<<endl;
    cout<<"minimum number is : ";
    cout<<min<<endl;

}