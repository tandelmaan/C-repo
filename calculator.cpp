#include<iostream>
#include<string>
using namespace std;
int main()
{
    float a,b;
    char n;
    cout<<"Enter the number 1 : ";
    cin>>a;
    cout<<"Enter the number 2 : ";
    cin>>b;
    cout<<"Enter the oprator (+,-,*,/) from the bracate to perform : ";
    cin>>n;
    switch(n)
    {
        case '+':
            cout<<a<<"+"<<b<<"="<<a+b;
            break;
        case '-':
            cout<<a<<"-"<<b<<"="<<a-b;
            break;
        case '*':
            cout<<a<<"*"<<b<<"="<<a*b;
            break;
        case '/':
            cout<<a<<"/"<<b<<"="<<a/b;
            break;
        default :
            cout<<"You have enterd wrong character .";
    }
    return 0;
}

