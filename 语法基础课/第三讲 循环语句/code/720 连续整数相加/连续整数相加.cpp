#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int temp;
    bool flag = true;
    while(flag){
        cin>>temp;
        if(temp>0){
            flag = false;
        }
    }
    int result = 0;
    for(int i = a;i<a+temp;i++){
        result = result +i;
    }
    cout<<result<<endl;
    return 0;
}