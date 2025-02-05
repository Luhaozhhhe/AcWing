#include<iostream>
using namespace std;
int main(){
    double M[12][12]={0};
    int l;
    cin>>l;
    char s;
    cin>>s;
    for(int i =0;i<12;i++){
        for(int j = 0;j<12;j++){
            cin>>M[i][j];
        }
    }
    if(s=='S'){
        double sum = 0;
        for(int i=0;i<12;i++){
            sum=sum+M[l][i];
        }
        printf("%.1lf\n",sum);
    }
    else if(s=='M'){
        double sum = 0;
        for(int i=0;i<12;i++){
            sum=sum+M[l][i];
        }
        printf("%.1lf\n",sum/12);
    }
    return 0;
}