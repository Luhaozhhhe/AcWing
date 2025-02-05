#include<iostream>
#include<string>
using namespace std;
int main(){
    string S,S1,S2;
    int i = 0;
    char a;
    while(cin>>a){
        if(a!=','){
            if(i==0){
                S+=a;
            }
            else if(i==1){
                S1+=a;
            }
            else if(i==2){
                S2+=a;
            }
        }
        else{
            i++;
        }
    }
    int s,s1,s2;
    s1=S.find(S1);
    s2=S.rfind(S2);
    if(s1!=-1&&s2!=-1&&(s1+S1.length()-1<s2)){
        int result = s2-s1-S1.length();
        cout<<result<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    
    return 0;
}