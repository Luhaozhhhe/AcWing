#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d>b){
        if(c>a){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",c-a,d-b);
        }
        else if(c<a){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",c-a+24,d-b);
        }
        else if(c==a){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",0,d-b);
        }
    }
    else if(d<b){
        if(c>a){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",c-a-1,d-b+60);
        }
        else if(c<a){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",c-a+23,d-b+60);
        }
        else if(c==a){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",23,d-b+60);
        }
    }
    else if(d==b){
        if(c>a){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",c-a,0);
        }
        else if(c<a){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",c-a+24,0);
        }
        else if(c==a){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",24,0);
        }
    }
    return 0;
}