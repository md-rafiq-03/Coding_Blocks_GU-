#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    // push 
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // top
    cout<<s.top()<<endl;

    // pop
    s.pop();
    cout<<s.top()<<endl;

    // empty
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    // empty
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
    

    return 0;
}






































