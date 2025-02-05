#include<iostream>
#include<string>
using namespace std;
int main(){
    while(cin){//持续输入
        string str;
        string substr;
        cin>>str;
        cin>>substr;
        int postion=0;
        int temp = -200;
        for(int i=0;i<str.length();i++){
            if(str[i]>temp){
                temp = str[i];
                postion = i;
            }
        }
        for(int i=0;i<=postion;i++){
            cout<<str[i];
        }
        cout<<substr;
        for(int i=postion+1;i<str.length();i++){
            cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}