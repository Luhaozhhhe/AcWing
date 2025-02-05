#include<iostream>
#include<string>
using namespace std;
int main(){
    double k;
    cin>>k;
    string a;
    string b;
    cin>>a>>b;
    int count = 0;
    for(int i =0;i<a.length();i++){
        if(a[i]==b[i]){
            count++;
        }
    }
    if(count>=k*a.length()){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}