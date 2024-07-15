#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        int curr=0;
        for (int j=i;j<n;j++){
            curr+=arr[j];
            cout<<curr<<endl;
        }
        cout<<endl;
    }
    return 0;
}