// Call by Reference

#include<iostream>
using namespace std;

// function declaration 

void swap(int &x, int &y);

int main()
{
    // loacl variable declartion

    int a=100;
    int b=200;

    cout<<"Before swap,value of a :"<< a << endl;
    cout<<"Before swap,value of b :"<< b << endl << endl;

    swap(a,b);

    cout<<"after swap,value of a :"<< a << endl;
    cout<<"after swap,value of b :"<< b << endl << endl;

    return 0;
}
 // function defination to swap the value
    void swap(int &x,int &y){
        int temp;

        cout<<"with the swap function ,before operation value of &x:"<< &x << endl;
        cout<<"with the swap function ,before operation value of &y:"<< &y << endl << endl;

        return;
    }