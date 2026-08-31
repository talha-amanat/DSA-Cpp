#include<iostream>
using namespace std;
struct treenode{
    int data;
    treenode* left;
    treenode* right;

    treenode(int d){
        data=d;
        left=nullptr;
        right=nullptr;
    }
};

void insert(treenode*& root,int val){
    if(root==nullptr){
        root=new treenode(val);
        return;
    }

    if(val<root->data){
        insert(root->left,val);
    }else{
        insert(root->right,val);
    }
}
int main(){
    treenode* meow=nullptr;

    insert(meow,5);

    treenode* temp=meow;
    while(temp != nullptr){
        cout<<temp->data
    }
}