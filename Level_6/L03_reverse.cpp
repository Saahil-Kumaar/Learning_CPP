#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
//Here we'll make 3 pointers in order to reverse the linked list 
//as it can't be doen with 2 pointers similar to sliding window
node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,4);
    display(head);
    node* newhead=reverse(head);
    display(newhead);
    return 0;
}