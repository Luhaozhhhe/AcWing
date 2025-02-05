#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[101];
    fgets(s, 101, stdin);
    cout<<strlen(s);
    return 0;
}