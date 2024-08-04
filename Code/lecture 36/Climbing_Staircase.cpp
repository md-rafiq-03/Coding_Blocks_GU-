#include<bits/stdc++.h>
using namespace std;
// Recursion
int solve(int n){
    if(n<=1)
        return 1;
    return  solve(n-1)+solve(n-2);
}
// Memoization
int solve_memo(int n,int dp[]){
    if(n<=1)
        return 1;
    // pahlse hi stored h to return kr do
    if(dp[n]!=-1){
        return dp[n];
    }
    // memoization
    dp[n]=solve_memo(n-1,dp)+solve_memo(n-2,dp);

    return dp[n];
}

int solve_tabular(int n){
    int dp[n+1];

    dp[0]=dp[1]=1;
    for(int i=2;i<n+1;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }

    return dp[n];
}


int main(){
    int n;
    cin>>n;
    int dp[n+1];
    memset(dp,-1,sizeof(dp));
    cout<<solve_memo(n,dp)<<endl;
    cout<<solve_tabular(n)<<endl;
    cout<<solve(n)<<endl;
    return 0;
}