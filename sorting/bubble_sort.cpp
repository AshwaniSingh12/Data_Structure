#include<iostream>
using namespace std;
void bubble(int arr[] , int n)
{
    int temp;
    int min;
    for(int i=0;i<n;i++)
    {
        bool swap=false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                swap=true;
            }
            if(swap == false)
            {
                break;
            }
        }   
    }
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
    bubble(arr,n);
}