#include<bits/stdc++.h>
using namespace std;
int main(){
    // max Heap/ max Priority queue
    // declaration
    cout<<"max Heap"<<endl;
    priority_queue<int> pq;
    pq.push(10);
    pq.push(9);
    pq.push(15);
    pq.push(1);


    cout<<pq.top()<<endl;
    // while(!pq.empty()){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }
    pq.pop();
    cout<<pq.top()<<endl;

    // min Priority queue/ min Heap
    cout<<"min Heap"<<endl;
    priority_queue<int,vector<int>,greater<int>> minPq;
    minPq.push(10);
    minPq.push(9);
    minPq.push(15);

    cout<<minPq.top()<<endl;
    minPq.pop();
    cout<<minPq.top()<<endl;

    return 0;
}