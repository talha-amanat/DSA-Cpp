#include <iostream>
using namespace std;

struct node {
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

  node* temp=head;
  while(temp->next!=nullptr){
    temp=temp->next;
  }
  temp->next=newnode;
};

int main() {  
node* head=nullptr;

   insertAtEnd(head,6);
   insertAtEnd(head,4);
   insertAtEnd(head,2);
   insertAtEnd(head,3);

   node* temp = head;
    while (temp != nullptr) {
        cout << temp->data<<"->";
        temp = temp->next;
    }
}