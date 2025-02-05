#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    if(a == 0 ||(b*b-4*a*c)<0){
        cout<<"Impossivel calcular"<<endl;
    }
    else{
        double solve1 = (-b+sqrt(b*b-4*a*c))/(2*a);
        double solve2 = (-b-sqrt(b*b-4*a*c))/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf",solve1,solve2);
    }
    return 0;
}