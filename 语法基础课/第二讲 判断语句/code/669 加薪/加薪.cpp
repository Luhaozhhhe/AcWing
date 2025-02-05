#include<iostream>
using namespace std;
int main(){
    double salary;
    cin>>salary;
    if(salary>=0 && salary <=400){
        printf("Novo salario: %.2lf\n",salary*1.15);
        printf("Reajuste ganho: %.2lf\n",salary * 0.15);
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(salary>=400.01 && salary <=800){
        printf("Novo salario: %.2lf\n",salary*1.12);
        printf("Reajuste ganho: %.2lf\n",salary * 0.12);
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if(salary>=800.01 && salary <=1200){
        printf("Novo salario: %.2lf\n",salary*1.1);
        printf("Reajuste ganho: %.2lf\n",salary * 0.1);
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if(salary>=1200.01 && salary <=2000){
        printf("Novo salario: %.2lf\n",salary*1.07);
        printf("Reajuste ganho: %.2lf\n",salary * 0.07);
        cout<<"Em percentual: 7 %"<<endl;
    }
    else if(salary>2000){
        printf("Novo salario: %.2lf\n",salary*1.04);
        printf("Reajuste ganho: %.2lf\n",salary * 0.04);
        cout<<"Em percentual: 4 %"<<endl;
    }

    return 0;
}