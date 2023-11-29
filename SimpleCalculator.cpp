#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    float num1, num2, result;
    char ope;
    cout<<"********** SIMPLE CALCULATOR ********"<<endl<<endl;

    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Enter operator (/,*,+,-) : ";
    cin>>ope;

    cout<<endl<<"********** CALCULATING **********"<<endl;
    cout<<"press any key to continue"<<endl<<endl;

    getch();

    if(ope == '+')
    {
        result = num1 + num2;
    }
    else if(ope == '-')
    {
      result = num1 - num2;
    }
    else if(ope == '*')
    {
        result = num1*num2;
    }
    else if(ope == '/')
    {
        if (num2>0)
        {
            result = num1/num2;
        }
        else
        {
            cout<<"ERROR: DIVISION BY ZERO IS NOT POSSIBLE";
            return 0;
        }
    }
    else
    {
        cout<<"!!!INVALID INPUT ENTERED!!!";
        return 0;
    }

    cout<<"RESULT = "<<result<<endl<<endl;
    return 0;
}
