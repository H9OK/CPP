#include<iostream>
using namespace std;

int main()

{
    // loacl variable declartion
    char grade='D';

    switch (grade)
    {
    case 'A':

    cout<<"Excellent!" << endl;
        break;

    case 'B':
    case 'C':

    cout<<"Well Done" << endl;

    break;

    case 'D':

    cout<<"You Passed" << endl;

    break;

    case 'F':

    cout<<"Batter Try again" << endl;
    
    break;

    default:

    cout<<"invalid Grade" << endl;
    }
    cout<<"Your Grade is " << grade << endl;

    return 0;
}

