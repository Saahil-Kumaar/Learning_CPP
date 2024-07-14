#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Output: "<<endl;
    int maxNum=INT_MIN;
    for (int i=0;i<n;i++){
        maxNum=max(maxNum,arr[i]);
        cout<<maxNum<<endl;
    }
    return 0;
}
