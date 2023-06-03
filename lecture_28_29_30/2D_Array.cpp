#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;

    int** arr= new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i] = new int[col];
    }


    /*
    int n;
    cin>>n;

    //creating 2D array
    int** arr= new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = new int[n];
    }
*/

    // taking input
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    //taking output
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //relearse memory 
    for(int i=0;i<row;i++)
    {
        delete[] arr[i];
    }
    delete[]arr;
}