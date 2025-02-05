#include<iostream>
using namespace std;
int gcd(int a,int b){
    //辗转相除法 或者 递归的方法来做
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    else{
        if(a>b){
            a=a%b;
            return gcd(a,b);
        }
        else{
            b=b%a;
            return gcd(a,b);
        }
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}