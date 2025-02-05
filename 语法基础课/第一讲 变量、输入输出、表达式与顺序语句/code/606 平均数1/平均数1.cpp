#include<iostream>
using namespace std;
int main(){
    double a;
    double b;
    scanf("%lf\n%lf", &a , &b);
    double result = a * 7/22 + b * 15/22;
    printf("MEDIA = %.5lf",result);
    return 0;
}