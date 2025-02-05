#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    string b;
    cin>>a>>b;
    //需要保证两个字符串的长度保持 前面大于后面
    if(a.length()<b.length()){
        swap(a,b);
    }
    string temp = a+a;//直接将原字符串扩展成两倍 直接一次就可以搜
    if(temp.find(b)!=-1){//看有没有找到，找到了就说明true
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}