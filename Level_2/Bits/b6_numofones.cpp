#include<bits/stdc++.h>
using namespace std;
int numofones(int n){
    int count =0;
    while (n){
        n=n&n-1;
        count++;
    }
    return count;
}
int main(){
    cout<<numofones(31)<<endl;
    return 0;
}