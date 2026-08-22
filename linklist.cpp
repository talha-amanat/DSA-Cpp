#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;

   
};
 
int main(){

  node* head=new node;
  head->data=5;
  head->next=nullptr;

 node* mid=new node;
  mid->data=25;
  mid->next=nullptr;

   node* last=new node;
  last->data=15;
  last->next=nullptr;

  
head->next=mid;
mid->next=last;

 node* temp=head;
  while(temp!=nullptr){
    cout<<temp->data<<endl;
  temp=temp->next;
}
}