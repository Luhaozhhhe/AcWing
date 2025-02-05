#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int temp = 1;
    for(int i = 0;i < n;i++){
        for(int j = 1;j < m;j++){
            cout<<temp<<" ";
            temp++;
        }
        cout<<"PUM"<<endl;
        temp++;
    }
    return 0;
}
