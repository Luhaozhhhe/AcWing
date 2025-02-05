#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count_in=0;
    int count_out=0;
    for(int i=0;i<num;i++){
        int n;
        cin>>n;
        if(n>=10 && n<=20){
            count_in ++;
        }
        else{
            count_out++;
        }
    }
    cout<<count_in<<" in"<<endl;
    cout<<count_out<<" out"<<endl;
    return 0;
}