#include<iostream>
using namespace std;
int main(){
    int total_km;
    float youliang;
    scanf("%d\n%f",&total_km,&youliang);
    double result = total_km/youliang;
    printf("%.3lf km/l",result);
    return 0;
}