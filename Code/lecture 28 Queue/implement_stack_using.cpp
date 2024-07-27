#include<bits/stdc++.h>
using namespace std;

class StackUsingQueue{
    public:
        queue<int> q1,q2;
        StackUsingQueue(){

        }

        int top(){
            return q1.front();
        }

        void pop(){
            q1.pop();
        }

        void push(int x){
            // x->q2
            q2.push(x);

            // q1-> q2

            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }

            // swap
            swap(q1,q2);
        }

        bool empty(){
            return q1.size()==0;
        }

        int size(){
            return q1.size();
        }
};

int main(){
    StackUsingQueue s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<endl;

    s.pop();

    s.push(40);
    cout<<s.top()<<endl;
    return 0;
}