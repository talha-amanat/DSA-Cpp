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

 void print(treenode* root){
    if(root==nullptr){
        return;
    }

    print(root->left);
    cout<<root->data<<endl;
    print(root->right);
 }
 bool search(treenode* root,int val){
    if(root==nullptr){
        return false;
    }

    if(val==root->data){return true;}
    if(val<root->data){
       return search(root->left,val);
    }else{
        return search(root->right,val);
    }
 }
 void deletenode(treenode*& root,int val){
    if(root==nullptr){
        return ;
    }
    if(val<root->data){
        deletenode(root->left,val);
    }else if(val>root->data){
        deletenode(root->right,val)
    }else{

        if(root->left==nullptr && root->right==nullptr){
            delete root;
            root=nullptr;
            return;
        }
        
        if(root->left==nullptr){
            treenode* temp=root;
            root=root->right;
            delete temp;
            return;
        }

         if(root->right==nullptr){
            treenode* temp=root;
            root=root->left;
            delete temp;
            return;
        }

        treenode* successor=root->right;
        while(successor->left!=nullptr){
            successor=successor->left;
        }
        root->data=successor->data;
        deletenode(root->right,successor->data);
    }
 }
 int main(){
    treenode* root=nullptr;
    insert(root,10);
    insert(root,5);
    insert(root,15);
    insert(root,12);
    insert(root,20);

    print(root);
 }