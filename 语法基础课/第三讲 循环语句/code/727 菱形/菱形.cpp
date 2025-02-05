#include<iostream>
using namespace std;
int abs_lhz(int a){
    if(a<0){
        a=-a;
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    int x = n/2;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(abs_lhz(x-i)+abs_lhz(x-j)<=x){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}