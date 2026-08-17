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

   node* sec=new node;
   sec->data=10;
   sec->next=nullptr;

head->next=sec;

   node* third=new node;
   third->data=15;
   third->next=nullptr;
    

   sec->next=third;
   node* temp=head;

   while(temp!=nullptr){
    cout<<temp->data<<endl;
    temp=temp->next;
   }
}