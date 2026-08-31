#include<iostream>
using namespace std;
struct treeNode{
    int data;
    treeNode* left;
    treeNode* right;

    treeNode(int d){
        data=d;
        left=nullptr;
        right=nullptr;
    }
};
void insert(treeNode*& root,int val){
    if(root==nullptr){
        root= new treeNode(val);
        return;
    }
    if(val<root->data){
        insert(root->left,val);
    }else{
        insert(root->right,val);
    }
}
void print(treeNode*& root){
    if(root==nullptr){
        return;
    }
    print(root->left);
    cout<<root->data<<endl;
    print(root->right);
}
int main(){
    treeNode* root=nullptr;

    insert(root,10);
    insert(root,11);
    insert(root,1);
    insert(root,4);

    print(root);
}
