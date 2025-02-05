#include<iostream>
using namespace std;
void print(int a[],int size){
    for(int i =0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    int size;
    cin>>n>>size;
    int a[1000];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    print(a,size);
    //为什么是a？
    //因为我们前面写的函数是a[]
    //代表一个地址
    //所以要使用a来做参数
    return 0;
}