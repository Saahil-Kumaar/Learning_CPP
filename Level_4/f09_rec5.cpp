#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){
        return 1;
    }
    return (arr[0]<arr[1] && sorted(arr+1,n-1));
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<sorted(arr,5)<<endl;
    return 0;
}