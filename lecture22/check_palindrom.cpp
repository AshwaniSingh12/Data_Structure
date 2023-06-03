#include<iostream>
using namespace std;
char tolower(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else 
    {
        char temp =ch -'A'+'a';
        return temp;
    }
}
bool pali(char name[] , int n)
{
    
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(tolower(name[s])!=tolower(name[e]))
        {
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char name[] , int n)
{
    int s=0;int e=n-1;
    while(s<e)
    {
        swap(name[s++] , name[e--]);
    }
}
int len(char name[])
{
    int count=0;
    for(int i=0; name[i] != '\0' ;i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cin>>name;
    int k=len(name);
    cout<<" length of string : "<<k<<endl;
    reverse(name ,k);
    cout<<"Reverse of string : "<<name<<endl;
    int res= pali(name,k);
    if(res==0)
    {
        cout<<"not palindrom"<<endl;
    }
    else cout<<"palimdrom"<<endl;

    cout<<"charecter : "<< tolower('M')<<endl;
}