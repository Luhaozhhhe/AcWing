#include<iostream>
using namespace std;
int main(){
    char a[10];
    double b;
    double c;
    scanf("%s\n%lf\n%lf",a,&b,&c);
    double result = b + 0.15 * c;
    printf("TOTAL = R$ %.2lf",result);
    return 0;
}