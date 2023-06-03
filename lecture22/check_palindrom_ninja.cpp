#include<iostream>
using namespace std;

string valid(string s)
{
    string str;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z'  ||  s[i]>='A' && s[i]<='Z'   ||   s[i]>='0' && s[i]<='9')
        {
            str.push_back(s[i]);
        }
    }
    return str;
}
string tolower(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]-'A'+'a';
        }
    }
    return s;
    
}
bool checkPalindrome(string s)
{
        string temp=valid(s);
        string ans=tolower(temp);
        int st=0;
        int e=ans.size()-1;
        while(st<=e)
        {
            if(ans[st]!=ans[e])
            {
                return 0;
            }
            else {
                st++;
                e--;
            }
        }
    return 1;
}
int main()
{
    char name[20];
    cin>>name;
    int res= checkPalindrome(name);
    if(res==0)
    {
        cout<<"not palindrom"<<endl;
    }
    else cout<<"palimdrom"<<endl;


}