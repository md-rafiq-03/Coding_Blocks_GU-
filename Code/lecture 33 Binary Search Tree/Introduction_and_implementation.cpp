#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int data){
            this->data=data;
            left=NULL;
            right=NULL;
        }
};

node* InsertBST(node* root,int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }
    if(data < root->data){
        // data jo h wo root ke data se chota h
        root->left=InsertBST(root->left,data);
    }else{
        // data jo h wo root ke data se bda h
        root->right=InsertBST(root->right,data);
    }
    return root;
}

node* createBST(){
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    node* root=NULL;
    while(data!=-1){
        root=InsertBST(root,data);
        cin>>data;
    }

    return root;
}


// lst
// root
// rst
void PrintInRange(node* root,int k1,int k2){
    if(!root)
        return ;
    
    if(root->data<k1){
        PrintInRange(root->right,k1,k2);
    }
    else if(root->data>k2){
        PrintInRange(root->left,k1,k2);
    }else{
        PrintInRange(root->left,k1,k2);
        if(root->data>=k1 && root->data<=k2){
            cout<<root->data<<" ";
        }
        PrintInRange(root->right,k1,k2);
    }
}


void preOrder(node* root){
    if(!root) return ;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}



void inOrder(node* root){
    if(!root) return ;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(node* root){
    if(!root) return ;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* root=createBST();
    cout<<"Pre Order"<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"In Order"<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"Post Order"<<endl;
    postOrder(root);
    cout<<endl;

    int k1,k2;
    k1=7 , k2=13;
    PrintInRange(root,k1,k2);

    return 0;
} 









































