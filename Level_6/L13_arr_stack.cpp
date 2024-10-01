#include<bits/stdc++.h>
using namespace std;
#define n 100
class Stack{
    int* arr;
    int top;
    public:
    Stack(){
        arr=new int[n];
        top=-1;  
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    int pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return 0;
        }
        return arr[top--];
    }
    int Top(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top==-1;
    }
};
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.isEmpty()<<endl;
    return 0;
}