#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    string b;
    for(int i = 0;i<a.length()-1;i++){
        b[i]=a[i]+a[i+1];
    }
    b[a.length()-1]=a[0]+a[a.length()-1];
    for(int i = 0;i<a.length();i++){
        cout<<b[i];
    }
    return 0;
}