#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a == 1){
        printf("Total: R$ %.2lf",4.00*b);
    }
    else if(a == 2){
        printf("Total: R$ %.2lf",4.50*b);
    }
    else if(a == 3){
        printf("Total: R$ %.2lf",5.00*b);
    }
    else if(a == 4){
        printf("Total: R$ %.2lf",2.00*b);
    }
    else{
        printf("Total: R$ %.2lf",1.50*b);
    }
    return 0;
}