#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int s[100][100]={0};
    int dx[]={-1,0,1,0};//横坐标
    int dy[]={0,1,0,-1};//纵坐标
    int x=0;
    int y=0;
    int d=1;//初始的移动是横坐标不动 纵坐标加一，表示往右移动
    //主要做法是根据移动的方向来计算
    //因为移动的方向先是往右 再往下 再往左 再往上
    //所以可以控制对应的移动方向，每次往一个方向移动
    //然后撞到之后，就改变运动的方向
    for(int i=1;i<=n*m;i++){
        s[x][y]=i;
        //初始化a和b
        int a=x+dx[d];
        int b=y+dy[d];
        //判断是否为临界情况
        if(a<0||a>=n||b<0||b>=m||s[a][b]){
            d=(d+1)%4;//遇到该情况，改变移动方向
            a=x+dx[d];//重新计算横纵坐标
            b=y+dy[d];
        }
        x=a;
        y=b;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}