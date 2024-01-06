#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node*left;
    node*right;
    node(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};
void preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void postorder(node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
    
}

int main(){
    node*root=new node(5);
    root->left=new node(7);
    root->left->left=new node(12);
    root->left->right=new node(4);
    root->left->right->left=new node(15);
    root->right=new node(2);
    root->right->right=new node(8);
    root->right->right->left=new node(-1);
    root->right->right->right=new node(10);
    cout<<"preorder: ";
    preorder(root);
    cout<<endl;
    cout<<"inorder: ";
    inorder(root);
    cout<<endl;
    cout<<"postorder: ";
    postorder(root);
    cout<<endl;
}