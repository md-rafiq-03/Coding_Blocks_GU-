#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int d){
            data=d;
            left=NULL;
            right=NULL;
        }
};

node* buildTreeLevelOrder(){
    cout<<"Enter root node data: "<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    node* root=new node(data);

    queue<node*>  q;
    q.push(root);

    while(!q.empty()){
        node* f=q.front();
        q.pop();

        int leftData;
        cout<<"Enter left node data of "<<f->data<<" "<<endl;
        cin>>leftData;

        if(leftData!=-1){
            node* leftNode=new node(leftData);
            f->left=leftNode;
            q.push(leftNode);
        }

        int rightData;
        cout<<"Enter right node data of "<<f->data<<" "<<endl;
        cin>>rightData;
        if(rightData!=-1){
            node* rightNode=new node(rightData);
            f->right=rightNode;
            q.push(rightNode);
        }

    }

    return root;

}

void printLevelOrder(node* root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* f=q.front();
        q.pop();

        cout<<f->data<<", ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }  
}


int main(){
    node* root=buildTreeLevelOrder();
    printLevelOrder(root);
    return 0;
}























