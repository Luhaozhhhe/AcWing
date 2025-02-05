#include<iostream>
using namespace std;
const int N=100;
void print2D(int a[][N], int row, int col){
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
}
int main(){
    int row,col;
    int x[N][N];
    cin>>row>>col;
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>x[i][j];
        }
    }
    print2D(x,row,col);
    return 0;
}