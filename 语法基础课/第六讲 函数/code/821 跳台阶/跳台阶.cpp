#include<iostream>
using namespace std;
int taijie(int a){
    if(a==1){
        return 1;
    }
    else if(a==2){
        return 2;
    }
    else{
        return taijie(a-1)+taijie(a-2);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<taijie(n)<<endl;
    return 0;
}