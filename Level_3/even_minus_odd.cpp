#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(6);
    for (int i=0;i<6;i++){
        cin>>v[i];
    }

    int evensum=0;
    for (int i=0;i<v.size();i+=2){
        evensum+=v[i];
    }
    cout<<"EvenSum: "<<evensum<<endl;

    int oddsum=0;
    for (int i=1;i<v.size();i+=2){
        oddsum+=v[i];
    }
    cout<<"OddSum: "<<oddsum<<endl;

    cout<<"Difference: "<<evensum-oddsum<<endl;
}