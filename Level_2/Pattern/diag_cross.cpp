#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Works Best for odd numbers.";
    cout<<"Enter number of rows: ";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if((i==j)||(i+j)==(a+1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
}