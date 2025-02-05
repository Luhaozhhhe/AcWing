#include<iostream>
using namespace std;
int main(){
    bool flag = true;
    while(flag){
        int a,b;
        cin>>a>>b;
        if(a>b){
            int temp = a;
            a = b;
            b = temp; 
        }
        if(a<=0||b<=0){
            flag = false;

        }
        int sum = 0;
        for(int i = a;i <= b;i++){
            if(flag){
                cout<<i<<" ";
                sum = sum + i;
            }
        }
        if(flag){
            cout<<"Sum="<<sum<<endl;
        }
    }
    return 0;
}