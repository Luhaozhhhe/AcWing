#include<iostream>
#include<string>
using namespace std;
int main(){
    string a[100];
    int i =0;
    while(cin>>a[i]){
        i++;
    }
    for(int k = i-1;k>=0;k--){
        cout<<a[k]<<" ";
    }
    return 0;
}