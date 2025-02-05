#include<iostream>
#include<string>
using namespace std;
int main(){
    int i =0;
    int num = 0;
    string target;
    while(cin){
        string a;
        cin>>a;
        //最重要的就是先去除掉最后的句号
        if(!a.empty()&&a.back()=='.'){
            a.pop_back();
        }
        if(a.length()>num){
            num=a.length();
            target = a;
        }
    }

    cout<<target<<endl;
    return 0;
}