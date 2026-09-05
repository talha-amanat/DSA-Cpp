#include<iostream>
using namespace std;

struct queue{
	int data;
	queue* next;
	
	queue(int d){
		data=d;
		next=NULL;
	}
};
void enqueue(queue*& front,queue*& rear,int val){
    queue* newnode=new queue(val);
    
    if(rear==nullptr){
        front=newnode;
        rear=newnode;
        return;
    }

    rear->next=newnode;
    rear=newnode;
}
void dequeue(queue*& front,queue*& rear,int val){
    if(front==nullptr){
        cout<<"Queue is empty"<<endl;
        return;
 }
queue* temp=front;
front=front->next;

 if(front==nullptr){
    rear=nullptr;
 }
 delete temp;
}

void peek(queue*& front){
     if(front==nullptr){
        cout<<"Queue is empty"<<endl;
        return;
 }
 cout<<front->data<<endl;
}