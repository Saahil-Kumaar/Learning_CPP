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
        cout<<"Parametrised Constructor"<<endl;
        name = s;
        age = a;
        gender = g;  
    }//Parameterised Constructor

    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }//Copy Constructor

    ~student(){
        cout<<"Destructor called"<<endl;
    }

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

    bool operator==(student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};
int main(){
    student a("Urvi",20,1);
    student b;
    student c=a;
    if(c==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
    return 0;
}