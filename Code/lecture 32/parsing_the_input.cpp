#include<bits/stdc++.h>
using namespace std;

// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int y){
            data=y;
            left=NULL;
            right=NULL;
        }
};

// node* buildTreePre(queue<string>& values){
//     // 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
//     if(values.empty()){
//         return  NULL;
//     }

//     string val=values.front();
//     values.pop();

//     int nodeData=stoi(val);
//     node* root=new node(nodeData);

//     // LST
//     if(!values.empty() && values.front()=="true"){
//         values.pop();
//         root->left=buildTreePre(values);
//     }else if(!values.empty() && values.front()=="false"){
//         values.pop();
//     }

//     // RST
//     if(!values.empty() && values.front()=="true"){
//         values.pop();
//         root->right=buildTreePre(values);
//     }else if(!values.empty() && values.front()=="false"){
//         values.pop();
//     }
//     return root;
// }


node* buildTreePre(){
    string val;
    cin>>val;
    if(val=="false") return NULL;

    int nodeData=stoi(val);
    node* root=new node(nodeData);

    string leftVal;
    cin>>leftVal;
    if(leftVal=="true"){
        root->left=buildTreePre();
    }

    string rightVal;
    cin>>rightVal;
    if(rightVal=="true"){
        root->right=buildTreePre();
    }
    return root;
}

void print(node* root){
    if(!root)
        return ;
    cout<<root->data<<" ";

    print(root->left);
    print(root->right);
}
int main(){
    // string s1,s2;
    // getline(cin,s1);
    // getline(cin,s2);
    // // cout<<s1<<endl;
    // // cout<<s2<<endl;

    // stringstream ss1(s1),ss2(s2);
    // string word;

    // queue<string> q1,q2;

    // while(ss1>>word){
    //     //cout<<word<<endl;
    //     q1.push(word);
    // }

    // while(ss2>>word){
    //     //cout<<word<<endl;
    //     q2.push(word);
    // }

    // node* root1=buildTreePre(q1);
    // print(root1);
    // cout<<endl;
    // node* root2=buildTreePre(q2);
    // print(root2);


        node* root1=buildTreePre();
        print(root1);
        cout<<endl;
        node* root2=buildTreePre();
        print(root2);



    return 0;
}