#include<stdio.h>
using namespace std;
int main(){
    int a,b,c,d;
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    int result = a*b-c*d;
    printf("DIFERENCA = %d",result);
    return 0;
}