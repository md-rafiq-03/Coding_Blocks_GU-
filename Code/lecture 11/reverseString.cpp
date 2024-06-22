#include<bits/stdc++.h>
// #include<cstring>
using namespace std;
int main(){
    char str[100]="LeetCoding";
    int n=strlen(str);
    int left=0,right=n-1;
    cout<<"Before: "<<str<<endl;
    while(left<=right){
        swap(str[left],str[right]);
        left++;
        right--;
    }   

    cout<<"Afer: "<<str<<endl;

    return 0;
}