#include<iostream>
using namespace std;
int abs1(int a,int b){
    if(a>b){
        return a-b;
    }
    else{
        return b-a;
    }
}
int max(int a,int b){
    return (a+b+abs1(a,b))/2;
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int result = max(max(a,b),c);
    printf("%d eh o maior",result);
    return 0;
}