#include<bits/stdc++.h>
using namespace std;
void pify(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        pify(s.substr(2));
    }
    else{
        cout<<s[0];
        pify(s.substr(1));
    }
}
int main(){
    pify("pippxxppiixipi");
    return 0;
}