#include<iostream>
using namespace std;
//#include -> it is a preprocessor directries
//#define -> with help of this we create a macros 
//macros -> a pice of code in a program that is replace by value of macros
// object like macro 
#define pi 3.14

// chain Macro definition
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

// Multi-line Macro definition
#define ELE 1, \
            2, \
            3


// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
    int r=2;

    int arr[] = { ELE };

    int a = 18;
    int b = 76;
    // double pi = 3.14
    double area = pi*r*r;
    cout<<"Area : "<<area<<endl;

    cout << "Geeks for Geeks have "<< INSTAGRAM << "K followers on Instagram!"<<endl;

    printf("Elements of Array are:\n");
 
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << ' ';
    }
    cout<<endl;

    cout << "Minimum value between "<< a << " and " << b << " is : " << min(a, b);
}