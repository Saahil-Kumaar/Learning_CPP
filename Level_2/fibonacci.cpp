#include<iostream>
using namespace std;
void fibo(int n){
    int t1=0;
    int t2=1;
    for (int i=0;i<=n;i++){
        cout<<t1<<" ";
        int nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }

}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    fibo(n);
}