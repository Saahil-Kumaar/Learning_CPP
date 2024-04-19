#include<iostream>
using namespace std;
int add(int a, int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"a+b = "<<add(a,b)<<endl;
    return 0;
}