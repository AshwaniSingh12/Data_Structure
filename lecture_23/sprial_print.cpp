#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col =matrix[0].size();
        
        int count=0;
        int total = row*col;
        
        int strow=0;
        int stcol=0;
        int endrow=row-1;
        int endcol = col-1;
        
        while(count<total)
        {
            for(int i=stcol;count<total && i<=endcol;i++)
            {
                ans.push_back(matrix[strow][i]);
                count++;
            }
            strow++;
            
            for(int i=strow;count<total && i<=endrow;i++)
            {
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;
            
            for(int i=endcol;count<total && i<=stcol;i--)
            {
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
            
            for(int i=endrow;count<total && i<=strow;i--)
            {
                ans.push_back(matrix[i][stcol]);
                count++;
            }
            stcol++;
        }
        return ans;
        
    }
};
int main()
{
    int arr[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }

    }
    cout<<"Your Output is : "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}