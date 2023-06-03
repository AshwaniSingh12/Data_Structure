// in bubble sort we put largest element at the end in first itteration

#include<bits/stdc++.h>
using namespace std;
void sortArray(int *v , int n)
{
    if(n==0 || n ==1) return ;
    for(int i=0;i<n;i++)
    {
        if(v[i]>v[i+1])
        {
            swap(v[i] , v[i+1]);
        }
    }
    sortArray(v,n-1);

}
int main()
{
    int v[6] = {2,3,1,9,6,0};
    sortArray(v,6);
    for(int i =0;i<6;i++)
    {
        cout<<v[i]<<" ";
    }
}