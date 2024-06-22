#include<bits/stdc++.h>
using namespace std;

int main(){
    // char s[100]="abcd";
    // int n=strlen(s);
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         for(int k=i;k<=j;k++){
    //             cout<<s[k];
    //         }
    //         cout<<endl;
    //     }
    // }

    string s;
    cin>>s;

    int n=s.size();
    for(int i=0;i<n;i++){
        string subStr="";
        for(int j=i;j<n;j++){
            //subStr.push_back(s[j]);
            subStr=subStr+s[j];
            cout<<subStr<<endl;
        }
    }
    
    return 0;
}