// Call by function 
#include<iostream>
using namespace std;

//function Declartion
int max( int num1, int num2);
int main()
{
    // Local Variable Declartion
    int a=100;
    int b=200;
    int ret;

    // Calling Function to get Max Value

    ret=max(a,b);
    cout<<"Max value is :" << ret << endl;

    return 0;

}
    // function returning max between two numbers

    int max(int num1, int num2)
    {
        // local Variablee Declartion

        int result;

        if(num1 > num2)
        
            result=num1;
        else
            result=num2;   

            return result;
    }