// #include<bits/stdc++.h>
// using namespace std;
// void printNTimes(char c,int n){
//     cout<<string(n,c);
// }
// string movex(string s){
//     if(s.length()==0){
//         return "";
//     }
//     int num = 0;
//     if(s[0]=='x'){
//         num++;
//         movex(s.substr(1));
//     }
//     else{
//         cout<<s[0];
//         movex(s.substr(1));
//     }
//     // cout<<string("x",num);
//     printNTimes('x',num);
// }
// int main(){
//     movex("axxbdxcefxhix");
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
string movex(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans = movex(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}
int main(){
    cout<<movex("axxbdxcefxhix");
    return 0;
}