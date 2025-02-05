#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"0"<<endl;
        return 0;
    }
    if(a<b){
        int temp;
        temp =a;
        a=b;
        b=temp;
    }
    int count = 0;
    for(int i =a-1;i>b;i--){
        if(i%2==1||i%2==-1){
            count = count + i;
        }
    }
    cout<<count<<endl;
    return 0;
}