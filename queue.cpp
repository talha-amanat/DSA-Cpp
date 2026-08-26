#include<iostream>
using namespace std;

struct queuenode{
    int data;
    queuenode* next;

    queuenode(int d){
        data=d;
        next=nullptr;
    }
};
void enqueue(queuenode*& front,queuenode*& rear,int val){
    queuenode* newnode=new queuenode(val);
    
    if(rear==nullptr){
        front=newnode;
        rear=newnode;
        return;
    }

    rear->next=newnode;
    rear=newnode;
}

void dequeue(queuenode*& front,queuenode*& rear){
    if(front==nullptr){return;}

    queuenode* temp=front;
    front=front->next;

    if(front==nullptr){
        rear=nullptr;
    }

    delete temp;
}
void peek(queuenode*& front){
    if(front==nullptr){
        cout<<"Queue is empty"<<endl;
        return;
    }

    cout<<"Front value "<<front->data<<endl;
    return;
}
int main(){
    queuenode* front=nullptr;
    queuenode* rear=nullptr;

    
    enqueue(front,rear,40);
    enqueue(front,rear,50);
    enqueue(front,rear,50);

    peek(front);
    dequeue(front,rear);

    queuenode* temp=front;
    while(temp!=nullptr){
        cout<<temp->data;
        if(temp->next!=nullptr){
            cout<<"->";
        }
        temp=temp->next;
    }
}