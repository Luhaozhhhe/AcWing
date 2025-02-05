#include<iostream>
using namespace std;
double add(double x, double y){
    double result = x + y;
    return result;
}
int main(){
    double a,b;
    cin>>a>>b;
    printf("%.2lf\n",add(a,b));
    return 0;
}