#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows of diamond: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            cout<<"  ";
        }
        for(int j=1;j<=n-2*i+(n-1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    
}