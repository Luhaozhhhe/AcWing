#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}