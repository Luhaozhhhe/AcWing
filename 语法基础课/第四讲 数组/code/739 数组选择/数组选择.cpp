#include<iostream>
using namespace std;
int main(){
    double x[100];
    bool flag[100]={false};
    for(int i = 0;i<100;i++){
        cin>>x[i];
        if(x[i]<=10){
            flag[i]=true;
        }
    }
    for(int i=0;i<100;i++){
        if(flag[i]){
            cout<<"A["<<i<<"] = ";
            printf("%.1lf\n",x[i]);
        }
    }

    return 0;
}