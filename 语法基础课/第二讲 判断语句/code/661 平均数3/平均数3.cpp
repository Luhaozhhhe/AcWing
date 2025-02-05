#include<iostream>
using namespace std;
int main(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double result = 0.2*a+0.3*b+0.4*c+0.1*d;
    cout<<"Media: "<<result<<endl;
    if(result>=7){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(result<5){
        cout<<"Aluno reprovado."<<endl;
    }
    else{
        cout<<"Aluno em exame."<<endl;
        double y;
        cin>>y;
        cout<<"Nota do exame: "<<y<<endl;
        double z = (result + y)/2;
        if(z>=5){
            cout<<"Aluno aprovado."<<endl;
        }
        else{
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<z<<endl;
    }
    return 0;
}