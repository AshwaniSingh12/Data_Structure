#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {2,5,4,6,9};
    cout << "Address " << arr << endl;
    cout << "Address of first memory block " << &arr[0] << endl;
    cout << "Value of first memory block " << arr[0] << endl;
    cout << "Address of fifth memory block " << &arr[5] << endl;

    cout << " 4th " << *arr << endl;
    cout << " 5th " << *arr+1 << endl;
    cout << " 6th " << *(arr+1) << endl;
    int i=3;
    cout << i[arr] <<endl;
}
/*
    arr[i] = *(arr+i)
    i[arr] = *(i+arr) 
     --> both are same .
*/