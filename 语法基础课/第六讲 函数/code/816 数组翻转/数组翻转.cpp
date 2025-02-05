#include<iostream>
using namespace std;
void reverse(int *a, int size,int n){
    for(int i=size-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    for(int i=size;i<n;i++){
        cout<<a[i]<<" ";
    }

}
int main(){
    int size,n;
    cin>>n>>size;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,size,n);

    return 0;
}