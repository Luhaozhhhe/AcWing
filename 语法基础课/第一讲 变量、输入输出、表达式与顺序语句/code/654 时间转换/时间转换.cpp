#include<iostream>
using namespace std;
int main(){
    int times;
    scanf("%d",&times);
    int a,b,c;
    a = times /3600;
    b = (times - a * 3600) / 60;
    c = times % 60;
    printf("%d:%d:%d",a,b,c);
    return 0;
}