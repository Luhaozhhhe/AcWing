#include<iostream>
using namespace std;
// 返回数组前n个数中的不同数的个数
int get_unique_count(int a[], int n){
    bool flag = true;
    int count=0;
    for(int i=0;i<n;i++){
        flag=true;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                flag = false;
            }
        }
        if(flag){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<get_unique_count(a,n)<<endl;

    return 0;
}