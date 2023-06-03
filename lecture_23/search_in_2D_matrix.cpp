#include<iostream>

using namespace std;
bool solve()
{
    
    int row = matrix.size();
    int col = matrix.size();
    int start = 0;
    int end = row*col;
    
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        int element = matrix[mid/col][mid%col];
        if(element == target)
        {
            return 1;
        }
        if(element < target)
        {
            start = mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start+(end-start)/2;
    }
}

int main()
{

}