#include<iostream>
using namespace std;
int main(){
//Data-Type    
    short a=10;
    int b=3;
    long c=4;
    long long d=5;
    float e=6.597;
    double f=6.597;
    long double g=6.597;
//Printing Value and Sum   
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl<<endl;
    cout<<"a+b is: "<<a+b<<endl;
    cout<<"a-b is: "<<a-b<<endl;
    cout<<"a*b is: "<<a*b<<endl;
    cout<<"a/b is: "<<(float)a/b<<endl<<endl;
//Size Of All Data-Types
    cout<<"Size of short: "<<sizeof(a)<<endl;
    cout<<"Size of integer: "<<sizeof(b)<<endl;
    cout<<"Size of long: "<<sizeof(c)<<endl;
    cout<<"Size of long long: "<<sizeof(d)<<endl;   
    cout<<"Size of float: "<<sizeof(e)<<endl;
    cout<<"Size of double: "<<sizeof(f)<<endl;
    cout<<"Size of long double: "<<sizeof(g)<<endl<<endl;    
//String Data Type
    string name="Sahil";
    cout<<"My name is: "<<name<<endl;
//camelCase Notation
    int marksInMaths = 56;
    cout<<"Marks in Maths: "<<marksInMaths<<endl;
    //variable "marksInMaths" can be accessed again and again by typing "mim"
}