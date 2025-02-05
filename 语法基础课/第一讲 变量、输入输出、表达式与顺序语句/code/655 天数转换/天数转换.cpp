#include<iostream>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int year;
    int month;
    int day;
    year = n / 365;
    month = (n - year * 365) / 30;
    day = (n - year * 365 - month * 30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)",year,month,day); 
    return 0;
}