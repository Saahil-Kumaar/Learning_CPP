#include<bits/stdc++.h>
using namespace std;
string rd(string s){
    if(s.length()==0){
        return "";        
    }
    if(s[0]==s[1]){
        rd(s.substr(1));
    }
    else{
        cout<<s[0];
        rd(s.substr(1));
    }
}
int main(){
    rd("aaaabbbeeecdddd");
    return 0;
}