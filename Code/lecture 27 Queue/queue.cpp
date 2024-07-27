#include<bits/stdc++.h>
using namespace std;

class Queue{
    private:
        int *a;
        int f ;
        int e;
        int cs;// current size of qeueu
        int n;// capacity of queue
    public:
    Queue(int size){
        a=new int[size];// dynamically array
        n=size;
        f=0;
        e=size-1;
        cs=0;
    }

    void push(int data){
        if(cs<n){
            // move e
            e=(e+1)%n;
            a[e]=data;
            cs++;
        }else {
            cout<<"Overflow"<<endl;
        }
    }

    void pop(){
        if(cs>0){
            // f ko aage move kr do
            f=(f+1)%n;
            cs--;
        }else{
            cout<<"Underflow"<<endl;
        }
    }

    int front(){
        if(cs==0){
            cout<<"Underflow"<<endl;
            return -1;
        }
        return a[f];
    }

    bool empty(){
        return cs==0;
    }

    int size(){
        return cs;
    }

};


int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);

    cout<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}














































