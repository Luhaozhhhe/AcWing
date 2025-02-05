#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int n[10];
    n[0]=a;
    for(int i = 1;i<10;i++){
        n[i]=2*n[i-1];
    }
    for(int i = 0;i<10;i++){
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
    }
    return 0;
}