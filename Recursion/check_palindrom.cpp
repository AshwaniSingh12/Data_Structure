// if string and reverse string both are same then it is palindrome 
#include<bits/stdc++.h>
using namespace std;
bool checkpalindrom (string &s , int i, int j)
{
    
    if(i>j){
        return true;
    }
    if(s[i] != s[j]) return false;
    else return checkpalindrom(s,i+1,j-1);
}
int main()
{
    string s;
    cin>>s;
    bool pali = checkpalindrom(s,0,s.length()-1);
    if(pali)
    {
        cout<<"palindrom"<<endl;
    }
    else {
        cout<<"not palindrom"<<endl;
    }
    return 0;

}