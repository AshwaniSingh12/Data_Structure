#include<iostream>
using namespace std;
void printsum(int arr[][4] , int m ,int n)
{
    int lar=0;
    int row;
    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+arr[i][j];
            
        }
        if(lar<sum)
        {
            lar=sum;
            row=i;
        }
        cout<<"Sum of Row "<<i<<" is = "<<sum<<endl;
    }
    cout<<"largest sum at at row : "<<(row+1)<<endl;
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
    printsum(arr , 3, 4);
}