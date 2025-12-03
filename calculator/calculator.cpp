#include <iostream>
using namespace std;
int main()
{
    char oper;
    float num1;
    float num2;
    float z;
    cout<<"Enter an operator (+,-,*,/) :";
    cin>>oper;
    cout<<"Enter the number 1 :";
    cin>>num1;
    cout<<"Enter the number 2 :";
    cin>>num2;
    
    switch(oper)
    {
        case '-':
            z=num1-num2;
            cout<<num1<<"-"<<num2<<"="<<z<<endl;
            break;
        case '+':
            z=num1+num2;
            cout<<num1<<"+"<<num2<<"="<<z<<endl;
            break;
        case '*':
            z=num1*num2;
            cout<<num1<<"*"<<num2<<"="<<z<<endl;
            break;
        case '/':
            z=num1/num2;
            cout<<num1<<"/"<<num2<<"="<<z<<endl;
            break;
        default:
            cout<<"ERROR"
        
        return 0;
    }
    cout<<"GOOD BYE";
}