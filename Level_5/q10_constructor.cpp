#include<bits/stdc++.h>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
    student(){
        cout<<"Default Constructor"<<endl;
    }//Default constructor
    student (string s,int a,bool g){
        name = s;
        age = a;
        gender = g;  
    }//Constructor
    void getName(){
        cout<<name<<endl;
    }
    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }
};
int main(){
    student a("Urvi",20,1);
    a.getName();
    a.printInfo();
    return 0;
}