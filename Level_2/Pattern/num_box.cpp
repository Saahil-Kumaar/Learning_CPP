#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"To print Right-Triangle enter same numbers.";
    cout<<"Enter number of rows: ";
    cin>>a;
    for(int i=1;i<=2*a-1;i++){
        for(int j=1;j<=a;j++){
            if((i==1)||(i==a)||(j==1)||(j==a)){
                cout<<a ;
            }
            // if((i==2)||(i==a-1)||(j==2)||(j==a-1)){
            //     cout<<a-1 ;
            // }


            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}