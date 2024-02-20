// Static Variable

#include<iostream>
void func(void);

static int count =10; /* Global Variable */

int main()
{
    while (count--)
    {
        func();
    }
    return 0;
    
}

//Function Defination

void func(void)
{
    static int i=5; // Local variable
    i++;

    std::cout<<"i is "<< i;
    std::cout<< "and count is" << count<<std::endl;
}