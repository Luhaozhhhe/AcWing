#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string yuan_a;
        cin>>yuan_a;
        string a = ' ' + yuan_a + ' ';
        int count = 1;
        int max_count = 0;
        char target=a[0];
        for(int i=1;i<a.length();i++){
            if(a[i]==a[i-1]){
                count++;
            }
            else{
                if(count>max_count){
                    max_count=count;
                    target = a[i-1];
                    if(target==' '){
                        target = a[1];
                    }
                }
                count=1;
            }
        }
        cout<<target<<" "<<max_count<<endl;
    }
    return 0;
}