#include<iostream>
using namespace std;
int sum(int l,int r){
    int sum=0;
    for(int i = l;i<=r;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    return 0;
}