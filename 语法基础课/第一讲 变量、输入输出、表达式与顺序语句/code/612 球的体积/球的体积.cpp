#include<iostream>
using namespace std;
int main(){
    double PAI = 3.14159;
    int a;
    scanf("%d",&a);
    double result = PAI * a * a * a *(4/3.0);
    printf("VOLUME = %.3lf",result);
    return 0;
}