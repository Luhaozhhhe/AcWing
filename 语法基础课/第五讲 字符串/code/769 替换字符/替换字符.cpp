#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    char s;
    cin>>s;
    for(int i=0;i<a.length();i++){
        if(a[i]==s){
            a[i]='#';
        }
    }
    for(int i=0;i<a.length();i++){
        cout<<a[i];
    }
    return 0;
}