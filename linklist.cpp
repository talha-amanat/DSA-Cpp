#include <iostream>
using namespace std;

struct node {
    int data;
    string name;
    node* next;
};
void insertAtBegining(node*& head,int val,string name){
node* newnode=new node;
newnode->data=val;
 newnode->name=name;
newnode->next=head;
head=newnode;
}
void insertAtEnd(node*& head,int val,string name){
  node* newnode=new node;
  newnode->data=val;
  newnode->name=name;
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
        cout << temp->data<<" "<<temp->name<<"->";
        temp = temp->next;
    }
}
void search(node*& head,int val){
  node* temp=head;
  bool found=false;

  while(temp !=nullptr && temp->data!=val){
    temp=temp->next;
  }
  if(temp != nullptr){
    found=true;
  }
  
  if(found){
    cout<<val<<" val found"<<endl;
  }else{
    cout<<val<<" val not found"<<endl;
  }
  

}
int main() {  
node* head=nullptr;

   insertAtEnd(head,6,"talha");
   insertAtEnd(head,4,"ali");
   insertAtEnd(head,2,"fatima");
   insertAtEnd(head,3,"miyamagi");

   insertAtBegining(head,7,"miyamagi2");

deleteNode(head, 4);
  search(head,5);
  printlist(head);
}