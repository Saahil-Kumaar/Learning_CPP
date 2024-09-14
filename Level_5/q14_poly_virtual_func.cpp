#include<bits/stdc++.h>
using namespace std;
class base{
    public:
        virtual void print(){
            cout<<"print func"<<endl;
        }
        void display(){
            cout<<"display func"<<endl;
        }
};
class derived : public base{
    public:
        void print(){
            cout<<"derived print func"<<endl;
        }
        void display(){
            cout<<"derived display func"<<endl;
        }
};
int main(){
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr -> print();
    baseptr -> display();
    return 0;
}