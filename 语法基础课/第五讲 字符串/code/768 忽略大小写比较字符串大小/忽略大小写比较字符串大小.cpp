#include<iostream>
#include<string>
using namespace std;
string lower(string a){
    for(int i =0;i<a.length();i++){
        if(a[i]>='A' && a[i]<='Z'){
            a[i]=a[i]+32;
        }
    }
    return a;
}
int max_lhz(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    string a_low = lower(a);
    string b_low = lower(b);
    bool flag = true;
    int max = max_lhz(a.length(),b.length());
    for(int i = 0;i<max;i++){
        if(a_low[i]>b_low[i]){
            cout<<">"<<endl;
            flag = false;
            return 0;
        }
        if(a_low[i]<b_low[i]){
            cout<<"<"<<endl;
            flag = false;
            return 0;
        }
    }
    if(flag){
        cout<<"="<<endl;
    }
    return 0;
}