// BITWISE OPERATOR

#include<iostream>
using namespace std;

int main()
{
    unsigned int a=60;
    unsigned int b=13;

    int c=0;

    c=a&b;
    cout<<"Line - 1 value of c is :"<< c <<endl;
    c=a|b;
    cout<<"Line - 2 value of c is :"<< c <<endl;
    c=a^b;
    cout<<"Line - 3 value of c is :"<< c <<endl;
    c=~a;
    cout<<"Line - 4 value of c is :"<< c <<endl;
    c=a<<2;
    cout<<"Line - 5 value of c is :"<< c <<endl;
    c=a>>2;
    cout<<"Line - 6 value of c is :"<< c <<endl;

    return 0;
}