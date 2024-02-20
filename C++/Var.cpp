#include<iostream>
using namespace std;

// variable Decalrtion

extern int a , b;
extern int c ;
extern float f;

int main()

{
    // Variable Defination

    int a , b;
    int c ;
    float f;

    // Actual initialization 

    a=10;
    b=20;
    c=a+b;

    cout<<c<<endl;
    f=70.0/3.0;
    cout<<f<<endl;

    return 0;
}