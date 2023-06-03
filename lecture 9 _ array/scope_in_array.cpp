#include<iostream>
using namespace std;
void update(int arr[],int n)
{
    arr[1]=120;
    cout<<endl<<"Inside the function "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[3]={1,3,4};
    update(arr,3);

}