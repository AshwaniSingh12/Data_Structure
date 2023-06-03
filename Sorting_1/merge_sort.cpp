#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &v , int s, int e)
{
    int mid = (s+e)/2;
    
    int len1 = mid-s+1;
    int len2 = e-mid;
    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int k = s;
    for(int i=0;i<len1;i++) first[i] = v[k++];

    k = mid+1;
    for(int i =0;i<len2;i++) second[i] = v[k++];

    // merge 2 sorted array 
    int index1 = 0;
    int index2 = 0;
    k = s;
    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2]) v[k++]=first[index1++];
        else v[k++]=second[index2++];
    }
    while(index1<len1) v[k++]=first[index1++];
    while(index2<len2) v[k++]=second[index2++];


}

void mergeSort(vector<int> &v , int s , int e )
{ 
    int mid = (s+e)/2;
    //base case 
    if(s>=e) return ;

    // left Part sort 
    mergeSort(v,s,mid);

    // right part sort
    mergeSort(v,mid+1,e);

    // merge
    merge(v,s,e);

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
    mergeSort(v,0,n-1);
    for(int i =0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}