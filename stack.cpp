#include<iostream>
using namespace std;

struct stacknode{
    int data;
    stacknode* next;

    stacknode(int d){
        data=d;
        next=nullptr;
    }
};

void push(stacknode*& top,int val){
    stacknode* newnode=new stacknode(val);
    newnode->next=top;
    top=newnode;
}

void pop(stacknode*& top){
    if(top==nullptr){
        cout<<"stack is empty "<<endl;
        return;
    }
stacknode* temp=top;
top=top->next;
delete temp;
}


void peek(stacknode*& top){
    if(top==nullptr){
        cout<<"stack is empty"<<endl;
        return;
    }

    cout<<"Top value "<<top->data<<endl;
}
int main() {
    stacknode* top = nullptr;

    push(top, 10);
    push(top, 20);
    push(top, 30);

    pop(top);   
    peek(top);
    stacknode* temp = top;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
