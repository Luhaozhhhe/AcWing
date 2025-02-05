#include<iostream>
using namespace std;
int main(){
    int a1,b1;
    double c1;
    int a2,b2;
    double c2;
    scanf("%d %d %lf\n%d %d %lf",&a1,&b1,&c1,&a2,&b2,&c2);
    double result = b1 * c1 + b2 * c2;
    printf("VALOR A PAGAR: R$ %.2lf",result);
    return 0;
}