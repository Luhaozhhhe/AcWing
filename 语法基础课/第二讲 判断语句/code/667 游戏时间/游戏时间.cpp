#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(b-a==0){
        cout<<"O JOGO DUROU "<<24<<" HORA(S)"<<endl;
    }
    else if(b-a<0){
        cout<<"O JOGO DUROU "<<b-a+24<<" HORA(S)"<<endl;
    }
    else if(b-a>0){
        cout<<"O JOGO DUROU "<<b-a<<" HORA(S)"<<endl;
    }
    return 0;
}