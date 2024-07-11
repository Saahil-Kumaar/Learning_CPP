// Linear search
// Time complexity: O(n )
#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
    for (int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    cout<<linearSearch(arr,n,key)<<endl;
    return 0;
}