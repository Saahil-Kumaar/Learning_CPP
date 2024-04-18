#include<iostream>
using namespace std;
int main(){
    char oper;
    int a,b;
    cout<<"Enter the operator(+,-,*,/): "<<endl;
    cin>>oper;
    cout<<"Enter first number(a): "<<endl;
    cin>>a;
    cout<<"Enter second number(b): "<<endl;
    cin>>b;

    switch (oper)
    {
    case '+':
        cout<<"a+b="<<a+b<<endl;
        break;
    case '-':
        cout<<"a*b="<<a-b<<endl;
        break;
    case '*':
        cout<<"a*b="<<a*b<<endl;
        break;
    case '/':
        cout<<"a/b="<<(float)a/b<<endl;
        break;            
    
    default:
        cout<<"Invalid Error."<<endl;
        break;
    }
}