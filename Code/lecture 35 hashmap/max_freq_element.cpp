#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    

    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    unordered_map<int,int> um;
    for(int i=0;i<n;i++){
        um[A[i]]++;
    }
    int maxFreq=0;
    int element;

    for(auto it:um){
        if(it.second>maxFreq){
            element=it.first;
            maxFreq=it.second;
        }
    }

    cout<<element<<endl;
    return 0;
}