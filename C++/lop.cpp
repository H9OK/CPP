// LOGICAL OPERATOR

#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 20;
    int c;

    if(a&&b)
    {
        cout<<"Line - 1 condition is true"<<endl;
    }
    if(a||b)
    {
        cout<<"Line - 2 condition is true"<<endl;
    }
    /* Lets change the value of a & b*/

    a=0;
    b=10;

    if(a&&b)
    {
        cout<<"Line - 3 condition is true"<<endl;
    }
    else
    {
        cout<<"Line - 4 comdition is not true"<<endl;
    }
    if(!(a&&b))
    {
        cout<<"Line - 5 condition is true"<<endl;
    }
        return 0;
}
