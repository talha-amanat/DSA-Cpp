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
}

int main() {  
node* head=nullptr;

   insertAtEnd(head,6);
   insertAtEnd(head,4);
   insertAtEnd(head,2);
   insertAtEnd(head,3);

   insertAtBegining(head,7);

   node* temp = head;
    while (temp != nullptr) {
        cout << temp->data<<"->";
        temp = temp->next;
    }
}