#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        // constructor
        node(int d){
            data=d;
            next=NULL;
        }
};

class Stack{
    private:
        node* head;
    public:
        Stack(){
            head=NULL;
        }

        // push
        void push(int data){
            node* n=new node(data);
            n->next=head;
            head=n;
        }

        // top
        int top(){
            if(head==NULL){
                cout<<"Kya Tapleek hai bhai"<<endl;
                return -1;
            }

            return head->data;
        }

        //pop
        void pop(){
            if(head==NULL){
                cout<<"Kya Tapleek hai bhai"<<endl;
            }

            node* n=head;
            head=head->next;
            delete n;
        }

        // empty
        bool empty(){
            return head==NULL;
        }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // top
    cout<<s.top()<<endl;
    // pop
    s.pop();
    // top
    cout<<s.top()<<endl;

    while(s.empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    // empty
    if(s.empty()==false){
        cout<<"stack is not empty"<<endl;
    }else{
        cout<<"Stack is empty"<<endl;
    }

    cout<<s.top()<<endl;
    s.pop();
    return 0;
}