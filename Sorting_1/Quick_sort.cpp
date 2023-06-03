#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &v , int s ,int e)
{
    int pivot = v[s];
    int cnt = 0;
    for(int i=s+1;i<=e;i++)
    {
        if(v[i]<=pivot) cnt++;
    
    }

    // place pivot at right position 
    int pivotindex = s+cnt;
    swap(v[pivotindex] , v[s]);

    // left and right part 
    int i = s , j = e;
    while(i<pivotindex && j>pivotindex)
    {
        while(v[i] <= pivot) i++;

        while(v[j] > pivot) j--;

        if(i < pivotindex && j > pivotindex) swap(v[i++] , v[j--]);
    }
    return pivotindex;

}

void quicksort(vector<int> &v , int s , int e)
{
    if(s>=e) return ;
    
    // Partition 
    int p = partition(v,s,e);

    // left part sort 
    quicksort(v,s,p-1);

    // right part sort 
    quicksort(v,p+1,e);
}
int main()
{
    int n ;
    cout<<"Enter the total number of elements :";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elments :";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    quicksort(v,0,n-1);
    for(int i =0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}