#include<iostream>
using namespace std;
int main()
{
    char name[10];
    cin>>name;
    int count=0;
    int i;
    for(int i=0;name[i] != '\0';i++)
    {
        count++;
    }
    cout<<count;
}