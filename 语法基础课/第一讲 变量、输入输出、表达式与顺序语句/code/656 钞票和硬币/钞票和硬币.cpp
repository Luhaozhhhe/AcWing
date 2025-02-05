#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,d,e,f,g;
    int h,i,j,k,l;
    double sum;
    scanf("%lf",&sum);
    a = sum / 100;
    b = (sum - a * 100) / 50;
    c = (sum - a * 100 - b * 50) / 20;
    d = (sum - a * 100 - b * 50 - c * 20)/ 10;
    e = (sum - a * 100 - b * 50 - c * 20 - d * 10) / 5;
    f = (sum - a * 100 - b * 50 - c * 20 - d * 10 - e * 5) / 2;
    g = (sum - a * 100 - b * 50 - c * 20 - d * 10 - e * 5 - f * 2);
    h = (sum - a * 100 - b * 50 - c * 20 - d * 10 - e * 5 - f * 2 - g) / 0.5;
    i = (sum - a * 100 - b * 50 - c * 20 - d * 10 - e * 5 - f * 2 - g - h * 0.5) / 0.25;
    j = (sum - a * 100 - b * 50 - c * 20 - d * 10 - e * 5 - f * 2 - g - h * 0.5 - i * 0.25) / 0.10;
    k = (sum - a * 100 - b * 50 - c * 20 - d * 10 - e * 5 - f * 2 - g - h * 0.5 - i * 0.25 - j * 0.10) / 0.05;
    l = ((int)round(sum * 100)) % 5;
    cout<<"NOTAS:"<<endl;
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);
    cout<<"MOEDAS:"<<endl;
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",h);
    printf("%d moeda(s) de R$ 0.25\n",i);
    printf("%d moeda(s) de R$ 0.10\n",j);
    printf("%d moeda(s) de R$ 0.05\n",k);
    printf("%d moeda(s) de R$ 0.01\n",l);


    return 0;
}