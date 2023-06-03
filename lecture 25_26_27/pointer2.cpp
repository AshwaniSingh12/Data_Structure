#include<iostream>
using namespace std;
int main()
{
    // pointer to int is created ,  and pointing to same garbage address 
    //int *p = 0;
    //cout<< *p << endl;
    
    // output is segmatation fault 

    /*
    int i=5;
    int *q=&i;
    cout<< q <<endl;
    cout<< *q << endl;

    int *p=0;
    p=&i;
    cout<< p << endl;
    cout<< *p <<endl;
    */
   int num=6;
   int a=num;
   cout<<num<<endl;
   a++;
   cout<<num<<endl;
   int *p=&num;
   cout<<"Before "<<num<<endl;
   (*p)++;
   cout<<"after "<<num<<endl;

    // how to copy a pointer  
   int *q=p;
   cout<< p << "__"<< q <<endl;
   cout<< *p << "__"<< *q <<endl;

   

    
}