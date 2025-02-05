#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        string a;
        string b;
        cin>>a>>b;
        if(a=="Hunter" && b=="Hunter"){
            cout<<"Tie"<<endl;
        }
        if(a=="Hunter" && b=="Bear"){
            cout<<"Player2"<<endl;
        }
        if(a=="Hunter" && b=="Gun"){
            cout<<"Player1"<<endl;
        }
        if(a=="Bear" && b=="Hunter"){
            cout<<"Player1"<<endl;
        }
        if(a=="Bear" && b=="Bear"){
            cout<<"Tie"<<endl;
        }
        if(a=="Bear" && b=="Gun"){
            cout<<"Player2"<<endl;
        }
        if(a=="Gun" && b=="Hunter"){
            cout<<"Player2"<<endl;
        }
        if(a=="Gun" && b=="Bear"){
            cout<<"Player1"<<endl;
        }
        if(a=="Gun" && b=="Gun"){
            cout<<"Tie"<<endl;
        }
    }
}