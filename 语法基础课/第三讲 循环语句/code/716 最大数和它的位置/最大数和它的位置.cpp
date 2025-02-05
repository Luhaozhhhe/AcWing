#include<iostream>
using namespace std;
int main(){
    int a[100];
    for(int i = 0;i<100;i++){
        cin>>a[i];
    }
    int temp = 0;
    int result = 0;
    for(int i = 0;i<100;i++){
        if(a[i]>temp){
            temp = a[i];
            result = i+1;
        }
    }
    cout<<temp<<endl;
    cout<<result<<endl;
    return 0;
}