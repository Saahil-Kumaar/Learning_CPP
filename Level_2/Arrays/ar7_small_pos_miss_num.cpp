#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    const int N=1e6+2;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i]=0;     //which means false.
    }
    for (int i=0;i<n;i++){
        if(a[i]>=0){
            check[a[i]]=1;  //which means true.
        }
    }
    int ans =-1;
    for (int i =0;i<N;i++){
        if (check[i]==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}