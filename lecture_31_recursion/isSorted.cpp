#include<bits/stdc++.h>
using namespace std;
bool isSorted(int n , int arr[])
{
    if(n==1 || n==0)
    {
        return true;
    }
    if(arr[0]>arr[1]){
        
        return false;
    }
    else {
        bool rem = isSorted(n-1 , arr+1);
        return rem;
    } 
}
int main()
{
    int n , arr[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool ans = isSorted(n,arr);
    if(ans)
    {
        cout<<"Sorted"<<endl;
    }
    else cout<<"Not Sorted" <<endl;
}