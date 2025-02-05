#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int a;
        cin>>a;
        bool flag = true;
        if(a==2){
            cout<<"2 is prime"<<endl;
        }
        else{
            for(int i=2;i*i<=a;i++){
                if(a%i==0){
                    flag = false;
                }
            }
        }
        if(flag && a!=2){
            cout<<a<<" is prime"<<endl;
        }
        else if(!flag && a!=2){
            cout<<a<<" is not prime"<<endl;
        }
    }
    return 0;
}