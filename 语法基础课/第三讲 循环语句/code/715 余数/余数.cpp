#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    for(int i = 2;i < 10000;i++){
        if(i % m == 2){
            cout<<i<<endl;
        }
    }
    return 0;
}