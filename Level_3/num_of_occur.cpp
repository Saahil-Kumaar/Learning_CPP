#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(6);
    for (int i=0;i<6;i++){
        cin>>v[i];
    }
    cout<<"Enter x: ";
    int x;
    cin>>x;
    /* Starting from end */
    int occur=0;
    for(int ele:v){
        if(ele==x){
            occur++;
        }
    }
    cout<<occur<<endl;
}