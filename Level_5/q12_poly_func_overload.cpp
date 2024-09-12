#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    void fun(){
        cout<<"No argument"<<endl;
    }
    void fun(int x){
        cout<<"Int argument"<<endl;
    }
    void fun(double x){
        cout<<"Double argument"<<endl;
    }
};
int main(){
    student a;
    a.fun();
    a.fun(4);
    a.fun(4.2);
    return 0;
}