#include<iostream>
using namespace std;
int find(int arr[][4] , int target,int m ,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j] == target)
            {
                return 1;
                break;
            }
        }
    }
    return 0;

}
int main()
{
    int arr[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }

    }
    cout<<"Your output is : "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter the element which you want to search : ";
    cin>>target;
    int res= find(arr , target ,3 ,4);
    if(res==1)
    {
        cout<<"Element found "; 
    }
    else cout<<"Element not found ";
}