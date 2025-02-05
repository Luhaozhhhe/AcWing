#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n,n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum=i+j;
                int result=1;
                for(int i=0;i<sum;i++){
                    result=result*2;
                }
                cout<<result<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}