#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "fffffauhfheiheioh";
    int freq[26];
    for (int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    char ans='a';
    char max=0;
    for(int i=0;i<26;i++){
        if(freq[i]>max){
            max=freq[i];
            ans=i+'a';
        }
    }
    cout<<max<<" "<<ans<<endl;
    return 0;
}
