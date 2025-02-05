#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = 0;
    int b = 1;
    int temp;
    if(n==1){
        cout<<"0"<<endl;
        return 0;
    }
    cout<<"0"<<" "<<"1"<<" ";
    for(int i = 0;i<n-2;i++){
        cout<<a+b<<" ";
        b = a + b;
        a = b - a;
    }
    return 0;
}