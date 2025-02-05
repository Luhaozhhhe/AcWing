#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int a,b;
        int count=0;
        cin>>a>>b;
        if(a>b){
            int temp = a;
            a = b;
            b = temp;
        }
        for(int i = a+1;i<b;i++){
            if(i%2==1||i%2==-1){
                count=count+i;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}