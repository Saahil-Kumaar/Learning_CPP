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
        for(int j=1;j<=b && j<=i;j++){
            if(i%2==0){
                cout<<(char)(j+64)<<" ";
            }
            else{
                
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    
}