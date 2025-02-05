#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num;
    char name;
    int cnum=0;
    int rnum=0;
    int fnum=0;
    for(int i = 0;i<n;i++){
        cin>>num>>name;
        if(name=='C'){
            cnum = cnum + num;
        }
        else if(name == 'R'){
            rnum = rnum + num;
        }
        else if(name == 'F'){
            fnum = fnum + num;
        }
    }
    int total = cnum + rnum + fnum;
    cout<<"Total: "<<total<<" animals"<<endl;
    cout<<"Total coneys: "<<cnum<<endl;
    cout<<"Total rats: "<<rnum<<endl;
    cout<<"Total frogs: "<<fnum<<endl;
    double per_c = double(cnum)/double(total);
    double per_r = double(rnum)/double(total);
    double per_f = double(fnum)/double(total);
    printf("Percentage of coneys: %.2lf %\n",per_c*100.0);
    printf("Percentage of rats: %.2lf %\n",per_r*100.0);
    printf("Percentage of frogs: %.2lf %\n",per_f*100.0);
    return 0;
}