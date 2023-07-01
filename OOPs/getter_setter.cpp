#include<iostream>
#include "Hero_Class.cpp"
using namespace std;

int main()
{
    Hero amit;
    //amit.health = 70;
    amit.level = 'A';
    
    cout<<" Size : " << sizeof(amit) << endl;
    
    cout<<" Health : " << amit.getHealth() << endl;
    cout<<" Level : " << amit.level << endl;
}