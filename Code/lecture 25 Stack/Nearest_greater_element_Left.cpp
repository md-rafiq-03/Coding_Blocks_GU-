#include<bits/stdc++.h>
using namespace std;

void NGL(vector<int>& a,int n){
    vector<int> ans(n);
    stack<int> s;
    ans[0]=-1;
    s.push(0);

    for(int i=1;i<n;i++){   
        while(!s.empty() && a[s.top()]<=a[i]){
            s.pop();
        }
        ans[i]=s.empty()?-1:a[s.top()];
        s.push(i);
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return ;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    NGL(a,n);

    return 0;
}