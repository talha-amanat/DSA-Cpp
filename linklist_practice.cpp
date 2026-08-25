#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void insertAtEnd(node*& head,int val){
    node* newnode=new node;
    newnode->data=val;
    newnode->next=nullptr;

    if(head==nullptr){
        head=newnode;
        return;
    }

    node* temp = head;

    while(temp->next!=nullptr){
        temp=temp->next;
    }

    temp->next=newnode;
}

void sh (node*& head) {
    node* temp=head;

    while (temp!=nullptr)
    {
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    
};

int main(){
    node* head=nullptr;

    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);

    sh(head);
}