#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
void insertAtBegining(node*& head,int val){
    node* newnode=new node;
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}
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

void deletenode(node*& head,int val){
    if(head==nullptr){return;}

node* temp= head;

if(val==head->data){
    head=head->next;
    delete temp;
    return;
}

while(temp->next!=nullptr && temp->next->data!=val ){
    temp=temp->next;
}

node* todelete=temp->next;
temp->next=todelete->next;
delete todelete;
return;
}

void  print(node*& head) {
    node* temp=head;

    while (temp!=nullptr)
    {
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    
};

void search(node*& head,int val){
    node* temp=head;
    bool found = false;

    if(temp!=nullptr && val!=temp->data  ){
        temp=temp->next;
    }

    if(val==temp->data){
        found=true;
    }

    if(found){
        cout<<val<<" val found"<<endl;
    }else{
        cout<<val<<" val not found"<<endl;
    }
}


int main(){
    node* head=nullptr;
insertAtBegining(head,3);
    insertAtBegining(head,2);
insertAtBegining(head,1);

    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
 insertAtEnd(head,7);
  insertAtEnd(head,7);
deletenode(head,1);
deletenode(head,7);

search(head,4);

    print(head);
}