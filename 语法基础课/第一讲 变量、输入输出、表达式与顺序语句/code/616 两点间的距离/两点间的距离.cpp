#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a;
    double b;
    double c;
    double d;
    scanf("%lf %lf\n%lf %lf",&a,&b,&c,&d);
    double distance = sqrt((c-a)*(c-a)+(d-b)*(d-b));
    printf("%.4lf",distance);
    return 0;
}