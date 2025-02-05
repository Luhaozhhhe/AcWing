#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n,n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                //找出最小的一个值
                //比如说，取两次min就是为了找出四个部分的最小的值
                cout<<min(min(i+1, j+1), min(n - i, n - j)) << ' ';
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}