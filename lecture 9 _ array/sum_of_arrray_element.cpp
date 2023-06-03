#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;

}
int main(){
    int arr[100],n;
    cout<<"Enter the total number of element in array : ";
    cin>>n;
    cout<<"Enter the element of array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=sum(arr,n);
    cout<<"Sum of all element of array : "<<res<<endl;

}