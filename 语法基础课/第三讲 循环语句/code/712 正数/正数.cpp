#include<iostream>
using namespace std;
int main(){
    int count = 0;
    double a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(a>0){
        count++;
    }
    if(b>0){
        count++;
    }
    if(c>0){
        count++;
    }
    if(d>0){
        count++;
    }
    if(e>0){
        count++;
    }
    if(f>0){
        count++;
    }
    cout<<count<<" positive numbers"<<endl;
    return 0;
}