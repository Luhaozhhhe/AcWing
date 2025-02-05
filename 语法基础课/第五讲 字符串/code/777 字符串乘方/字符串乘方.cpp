#include<iostream>
#include<string>
using namespace std;
int main(){
    //可以使用位移来做。每次位移一位，观察是否与原字符串相等
    //如果相等的话，就说明这个距离可以成为答案
    string a;
    string b;
    bool flag = true;
    while(cin>>a && a!="."){
        flag = true;
        b=a;
        for(int i =0;i<a.length();i++){
            a=a.substr(1)+a[0];//移位，向右移动一位
            if(b==a&&flag){
                cout<<a.length()/(i+1)<<endl;
                flag = false;
            }
        }
    }
    return 0;
}