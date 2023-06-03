/*
    what is pointers ? 
    --> it is a variable that store the memory address of an object .
    int  *p it means --> p is a pointer to int data type 
    any type of data always pointer size is 8.
*/
#include<iostream>
using namespace std;
int main()
{
    int num = 6;
    int *ptr = &num;
    cout << num << endl;
    num+=1;

    // address of operator - & 
    cout<< "address of num "<< &num << endl;
    cout<< "pointer of num "<< *ptr << endl;
    cout << " size of integer is "<< sizeof(num) << endl;
    cout << " size of pointer is "<< sizeof(ptr) << endl;


    return 0;

}
