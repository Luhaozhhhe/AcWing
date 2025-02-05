#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000]={0};
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int temp = 2000;
    int num = 0;
    for(int i=0;i<n;i++){
        if(a[i]<temp){
            temp=a[i];
            num=i;
        }
    }
    cout<<"Minimum value: "<<temp<<endl;
    cout<<"Position: "<<num<<endl;
    return 0;
}