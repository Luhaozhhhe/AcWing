#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    for(int i =0;i<n;i++){
        cin>>a;
        int sum=0;
        for(int i =1;i*i<a;i++){
            if(a%i==0){
                sum+=i;
                if(i!=a/i&&a/i!=a){
                    sum+=a/i;
                }
            }
        }
        if(sum==a){
            cout<<a<<" is perfect"<<endl;
        }
        else{
            cout<<a<<" is not perfect"<<endl;
        }
    }
    return 0;
}