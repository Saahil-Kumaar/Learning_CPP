#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"To print Right-Triangle enter same numbers.";
    cout<<"Enter number of rows: ";
    cin>>a;
    cout<<"enter number of columns: ";
    cin>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if((i==1)||(i==a)||(j==1)||(j==b)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
}