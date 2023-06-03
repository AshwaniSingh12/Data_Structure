#include<iostream>
using namespace std;
class Solution
{
    public:
    char getMaxOccuringChar(string str)
    {
        int n=str.length();
        int arr[26]={0};
        for(int i=0;i<n;i++)
        {
            int num=0;
            char ch =str[i];
            if(ch>='a' && ch<='z')
            {
                num =ch-'a';
            }
            else {
                num=ch-'A';
            }
            arr[num]++;
        }
        int max= -1;
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(max<arr[i])
            {
                ans=i;
                max=arr[i];
            }
        }
        char final ='a'+ans;
        return final;
    }

};
int main()
{
    string str;
    cin >> str;
    Solution obj;
    cout<< obj.getMaxOccuringChar(str)<<endl;
}
