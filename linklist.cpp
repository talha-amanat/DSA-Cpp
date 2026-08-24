#include <iostream>
using namespace std;

struct node {
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

  node* temp=head;
  while(temp->next!=nullptr){
    temp=temp->next;
  }
  temp->next=newnode;
}

void deleteNode(node*& head,int val){
  if(head==nullptr){return;}

  if(head->data==val){
    node* temp=head;
    head=head->next;
    delete temp;
    return;
  }
  node* temp=head;
  while(temp->next!=nullptr && temp->next->data!=val){
    temp=temp->next;
  }
  if(temp->next==nullptr){
    cout<<val<<"list mein nahi mila"<<endl;
    return;
  }


node* todelete=temp->next;
temp->next=todelete->next;
delete todelete;
}

void printlist(node*& head){
  node* temp = head;
    while (temp != nullptr) {
        cout << temp->data<<"->";
        temp = temp->next;
    }
}

int main() {  
node* head=nullptr;

   insertAtEnd(head,6);
   insertAtEnd(head,4);
   insertAtEnd(head,2);
   insertAtEnd(head,3);

   insertAtBegining(head,7);

deleteNode(head, 4);

  printlist(head);
}