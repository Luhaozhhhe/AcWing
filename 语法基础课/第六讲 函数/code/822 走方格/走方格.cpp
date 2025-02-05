#include<iostream>
using namespace std;
int solve(int a,int b){
    if(a==0||b==0){
        return 1;
    }
    else{
        return solve(a-1,b)+solve(a,b-1);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<solve(n,m);
    return 0;
}