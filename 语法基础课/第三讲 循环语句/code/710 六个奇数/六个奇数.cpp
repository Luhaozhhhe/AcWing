#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    for(int i = 0;i<6;i++){
        cout<<(m/2)*2+1<<endl;
        m+=2;
    }
    return 0;
}