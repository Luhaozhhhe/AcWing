#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long fib[60]={0};
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=60;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i = 0;i<n;i++){
        int k;
        cin>>k;
        cout<<"Fib("<<k<<") = "<<fib[k]<<endl;
    }
    return 0;
}