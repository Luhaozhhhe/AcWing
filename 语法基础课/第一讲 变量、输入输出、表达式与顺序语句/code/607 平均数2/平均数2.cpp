#include<iostream>
using namespace std;
int main(){
    double a,b,c;
    scanf("%lf\n%lf\n%lf",&a,&b,&c);
    double result = 0.2 * a + 0.3 * b + 0.5 * c;
    printf("MEDIA = %.1lf",result);
    return 0;
}
