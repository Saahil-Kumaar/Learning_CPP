#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of Lines: ";
    cin>>n;
    int nsp = n/2;
    int nst = 1;
    int ml = n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        for(int k=1;k<=nst;k++){
            cout<<"* ";
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        cout<<endl;
    }
}