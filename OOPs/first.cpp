#include<iostream>
#include "Hero_Class.cpp"
using namespace std;

int main()
{
    Hero amit;
    amit.health = 70;
    amit.level = 20;
    
    cout<<" Size : " << sizeof(amit) << endl;
    
    cout<<" Health : " << amit.health << endl;
    cout<<" Level : " << amit.level << endl;
}