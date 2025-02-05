#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    for(int i=0;i<a.length();i++){
        if(a[i]>='a'&&a[i]<='z'){
            a[i]=((a[i]-97)+1)%26+97;
        }
        if(a[i]>='A'&&a[i]<='Z'){
            a[i]=((a[i]-65)+1)%26+65;
        }
    }
    for(int i=0;i<a.length();i++){
        cout<<a[i];
    }
    return 0;
}