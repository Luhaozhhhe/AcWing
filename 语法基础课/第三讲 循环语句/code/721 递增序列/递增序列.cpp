#include<iostream>
using namespace std;
int main(){
    while(1){
        int a;
        cin>>a;
        if(a==0){
            return 0;
        }
        for(int i =0;i<a;i++){
            cout<<i+1<<" ";
        }
        cout<<endl;

    }
    return 0;
}