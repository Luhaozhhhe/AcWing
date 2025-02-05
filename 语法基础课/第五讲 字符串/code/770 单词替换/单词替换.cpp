#include<iostream>
#include<string>
using namespace std;
int main(){
    string a[10000];
    int i = 0;
    while(cin>>a[i]){
        i++;
    }
    for(int k=0;k<i-2;k++){
        if(a[k]==a[i-2]){
            cout<<a[i-1]<<" ";
        }
        else{
            cout<<a[k]<<" ";
        }
    }
    return 0;
}