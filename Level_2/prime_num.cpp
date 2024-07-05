#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    bool flag=0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            cout<<"Non_prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime"<<endl;
    }

}