#include<iostream>
using namespace std;
void printarray(char arr[] , int size){
    cout<<"Array is "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int n=5;
    char num[100];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }

    printarray(num,n);
    
}