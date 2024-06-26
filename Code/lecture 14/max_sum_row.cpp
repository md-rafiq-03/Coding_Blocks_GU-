#include<bits/stdc++.h>
using namespace std;

int  main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int sum=0;
    int ind;
    for(int i=0;i<n;i++){
        int currsum=0;
        for(int j=0;j<m;j++){
            currsum+=arr[i][j];
        }
        if(currsum>sum){
            ind =i;
            sum=currsum;
        }
    }

    cout<<ind<<endl;
    return 0;

}