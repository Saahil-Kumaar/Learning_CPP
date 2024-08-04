#include<bits/stdc++.h>
using namespace std;
void primeFactor(int n){
    int spf[100]={0};
    for (int i=2;i<=n;i++){
        spf[i]=i;
    }
    for (int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    /* //just to visualize how the spf look like
    for (int i=2;i<=n;i++){
        cout<<spf[i]<<" ";
    }
    */
    cout<<endl;
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
    
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    primeFactor(n);
    return 0;
}