#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"To print Right-Triangle enter same numbers.";
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=n;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}