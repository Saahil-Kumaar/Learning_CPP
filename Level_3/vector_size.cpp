#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Resize: "<<v.size()<<endl;
    cout<<"Resize Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Resize: "<<v.size()<<endl;
    cout<<"Resize Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Resize: "<<v.size()<<endl;
    cout<<"Resize Capacity: "<<v.capacity()<<endl;

    v.resize(5);
    cout<<"Resize: "<<v.size()<<endl;
    cout<<"Resize Capacity: "<<v.capacity()<<endl;

    v.resize(7);
    cout<<"Resize: "<<v.size()<<endl;
    cout<<"Resize Capacity: "<<v.capacity()<<endl;

    v.resize(11);
    cout<<"Resize: "<<v.size()<<endl;
    cout<<"Resize Capacity: "<<v.capacity()<<endl;

}
