#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(111);
    v.push_back(2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    vector<int>::iterator it;
    //iterator (it) is an pointer
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    for (auto element:v){
        cout<<element<<endl;
    }
    v.pop_back();
    vector<int> v2(3,50);
    swap(v,v2);
    for (auto element:v){
        cout<<element<<endl;
    }
    for (auto element:v2){
        cout<<element<<endl;
    }
    return 0;
}