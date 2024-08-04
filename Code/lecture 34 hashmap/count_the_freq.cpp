#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    map<int,int> myMap;
    for(int i=0;i<n;i++){
        myMap[a[i]]+=1;
    }

    for(auto it:myMap){
        cout<<it.first<<": "<<it.second<<endl;
    }


    return 0;
}