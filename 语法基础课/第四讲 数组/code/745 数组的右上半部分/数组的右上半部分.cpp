#include<iostream>
using namespace std;
int main(){
    double M[12][12];
    char s;
    cin>>s;
    for(int i = 0;i<12;i++){
        for(int j = 0;j<12;j++){
            cin>>M[i][j];
        }
    }
    double sum=0;
    int count=0;
    for(int i = 0;i<12;i++){
        for(int j = 0;j<12;j++){
            if(j-i>=1){
                sum+=M[i][j];
                count++;
            }
        }
    }
    if(s=='S'){
        printf("%.1lf",sum);
    }
    else if(s=='M'){
        printf("%.1lf",sum/count);
    }
    return 0;
}