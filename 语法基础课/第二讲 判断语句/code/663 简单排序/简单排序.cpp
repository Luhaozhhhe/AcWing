#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int temp1,temp2,temp3;
    if(a<b && a<c){
        temp1 = a;
        if(b<c){
            temp2 = b;
            temp3 = c;
        }
        else{
            temp2 = c;
            temp3 = b;
        }
    }
    else if(b<a && b<c){
        temp1 = b;
        if(a<c){
            temp2 = a;
            temp3 = c;
        }
        else{
            temp2 = c;
            temp3 = a;
        }
    }
    else if(c<a && c<b){
        temp1 = c;
        if(a<b){
            temp2 = a;
            temp3 = b;
        }
        else{
            temp2 = b;
            temp3 = a;
        }
    }
    cout<<temp1<<endl;
    cout<<temp2<<endl;
    cout<<temp3<<endl;
    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}