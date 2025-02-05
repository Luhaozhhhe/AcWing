#include<iostream>
using namespace std;
void print(char *str){//或者写成str[]也行，就是参数是一个具体的值，也就是地址
    for(int i=0;str[i];i++){
        cout<<str[i];
    }
}
int main(){
    char a[130];
    cin.getline(a,120);
    print(a);//对应的参数就是char数组的首地址了
    return 0;
}