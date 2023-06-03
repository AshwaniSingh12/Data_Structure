#include<iostream>
using namespace std;
void rev(char name[] , int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(name[s] , name[e]);
        s++;
        e--;
    }
}
int main()
{
    char name[10];
    cin>>name;
    int count=0;
    int i;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    cout<<count<<endl;
    int k=count;
    rev(name , k);
    cout<<name;
    
}