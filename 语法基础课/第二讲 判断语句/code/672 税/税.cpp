#include<iostream>
using namespace std;
int main(){
    double a;
    cin>>a;
    if(a<=2000){
        cout<<"Isento"<<endl;
    }
    else if(a>=2000.01 && a<3000){
        double result;
        result = (a - 2000) * 0.08;
        printf("R$ %.2lf",result);
    }
    else if(a>=3000.01 && a<4500){
        double result;
        result = 1000 * 0.08 + (a - 3000) * 0.18;
        printf("R$ %.2lf",result);
    }
    else if(a>=4500){
        double result;
        result = 1000 * 0.08 +1500 * 0.18 + (a-4500)*0.28;
        printf("R$ %.2lf",result);
    }
    return 0;
}