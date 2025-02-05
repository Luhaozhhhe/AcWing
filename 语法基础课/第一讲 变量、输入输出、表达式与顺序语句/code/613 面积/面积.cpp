#include<iostream>
using namespace std;
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double result_1 = 0.5 * a * c;
    double result_2 = 3.14159 * c * c;
    double result_3 = 0.5 * (a + b) * c;
    double result_4 = b * b;
    double result_5 = a * b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf",result_1,result_2,result_3,result_4,result_5);
    return 0;
}