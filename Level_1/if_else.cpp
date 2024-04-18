#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if (age<= 18||age>=80){
        cout<<"You cannot Vote"<<endl;
    }
    else{
        cout<<"You can Vote"<<endl;
    }
}