#include<iostream>
using namespace std;
int main(){
    int num;
    int time;
    double salary;
    scanf("%d\n%d\n%lf",&num,&time,&salary);
    double result = salary * time;
    printf("NUMBER = %d\nSALARY = U$ %.2lf",num,result);
    return 0; 
}