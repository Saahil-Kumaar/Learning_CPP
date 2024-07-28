#include<bits/stdc++.h>
using namespace std;
int powerof2(int n){
    return (n && !(n & n-1));
}
int main(){
    cout<< powerof2(256)<<endl;
    return 0;
}