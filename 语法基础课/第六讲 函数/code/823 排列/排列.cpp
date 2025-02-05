#include<iostream>
using namespace std;
const int N = 10;
int n;
void dfs(int u,int num[],bool st[]){
    if(u>n){//遍历完毕，直接输出
        for(int i = 1;i<=n;i++){
            cout<<num[i]<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=1;i<=n;i++){
            if(st[i]==0){
                st[i]=1;
                num[u]=i;
                dfs(u+1,num,st);
                st[i]=0;
            }
        }
    }
}
int main(){
    cin>>n;
    int num[N];
    bool st[N]={0};
    dfs(1,num,st);
    return 0;
}