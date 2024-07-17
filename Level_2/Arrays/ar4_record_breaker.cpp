//Yet to be resolved
//Time Complexity: O(n)     *Due to constraints given in question.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1] && a[i]>a[i+1]){
            cout<<a[i]<<" is record breaking"<<endl;
        }
    }

    cout<<endl;
    return 0;
}