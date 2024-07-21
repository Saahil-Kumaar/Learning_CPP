#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check= 1;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            check=0;
            break;
        }
    }
    if(check==1){
        cout<<"PALINDROME."<<endl;
    }
    else{
        cout<<"NOT PALINDROME."<<endl;
    }
    return 0;
}