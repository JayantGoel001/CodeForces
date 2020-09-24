#include<iostream>
#include <string>
#include <queue>
using namespace std;
int main(){
    int n;
    string str;
    cin>>n;
    cin>>str;
    int *ar = new int[10];
    for (int i = 0; i < n; ++i) {
        ar[i]=0;
    }
    for (int i = 0; i < n; ++i) {
        if (str[i]=='L'){
            for (int j = 0; j < 9; ++j) {
                if (ar[j]==0){
                    ar[j]=1;
                    break;
                }
            }
        } else if(str[i]=='R'){
            for (int j = 9; j >=0; --j) {
                if (ar[j]==0){
                    ar[j]=1;
                    break;
                }
            }
        }else{
            int pos = (int)str[i]-(int)('0');
            ar[pos]=0;
        }
    }

    for (int i = 0; i < 10; ++i) {
        cout<<ar[i];
    }
}