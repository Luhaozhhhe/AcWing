#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    bool flag = true;

    for(int i = 0;i<a.length();i++){
        if(a.find(a[i])==a.rfind(a[i])){
            cout<<a[i]<<endl;
            flag = false;
            break;
        }
    }
    if(flag==true){
        cout<<"no"<<endl;
    }
    return 0;
}