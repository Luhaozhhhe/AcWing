#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string a[209];
    while(cin>>n){
        if(n==0){
            return 0;
        }
        for(int i=0;i<n;++i){
            cin>>a[i];
            reverse(a[i].begin(),a[i].end());
        }
        sort(a,a+n);
        string v = "";
        for(int i=0;i<a[0].length();++i){
            if(a[0][i]==a[n-1][i]){
                v=a[0][i]+v;
            }
            else{
                break;
            }
        }
        cout<<v<<endl;
    }
    return 0;
}