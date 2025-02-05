#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f,g;
    int sum;
    scanf("%d",&sum);
    a = sum / 100;
    b = (sum - a * 100) / 50;
    c = (sum - a * 100 - b * 50) / 20;
    d = (sum - a * 100 - b * 50 - c * 20)/ 10;
    e = (sum - a * 100 - b * 50 - c * 20 - d * 10) / 5;
    f = (sum - a * 100 - b * 50 - c * 20 - d * 10 - e * 5) / 2;
    g = (sum - a * 100 - b * 50 - c * 20 - d * 10 - e * 5 - f * 2);
    printf("%d\n",sum);
    printf("%d nota(s) de R$ 100,00\n",a);
    printf("%d nota(s) de R$ 50,00\n",b);
    printf("%d nota(s) de R$ 20,00\n",c);
    printf("%d nota(s) de R$ 10,00\n",d);
    printf("%d nota(s) de R$ 5,00\n",e);
    printf("%d nota(s) de R$ 2,00\n",f);
    printf("%d nota(s) de R$ 1,00\n",g);

    return 0;
}