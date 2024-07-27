#include<bits/stdc++.h>
using namespace std;


//      1
//     /  \
//     2   3

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};

node* buildTree(){
    int data;
    cin>>data;

    if(data==-1)
        return NULL;
    
    // root
    node* root=new node(data);
    // LST
    root->left=buildTree();
    //RST
    root->right=buildTree();

    return root;
}

// Print
//Pre Order traversal
void PreOrder(node* root){
    // base
    if(root==NULL)
        return ;
    //  root-->LST-->RST

    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

//in Order traversal

void inOrder(node* root){
    // base case
    if(root==NULL){
        return ;
    }

    // LST
    inOrder(root->left);
    //print root
    cout<<root->data<<" ";
    // RST
    inOrder(root->right);
}


// Post Order Traversal

void postOrder(node* root){
    // base case
    if(root==NULL)
        return ;
    
    postOrder(root->left);// LST
    postOrder(root->right);// RST
    cout<<root->data<<" ";
}

int main(){
    node* root=buildTree();
    cout<<"Pre Order traversal:"<<endl;
    PreOrder(root);
    cout<<endl;
    cout<<"in Order traversal:"<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"Post Order traversal:"<<endl;
    postOrder(root);
    return 0;
}





















