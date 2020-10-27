#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        string x;
        cin>>x;
        int len = x.length();
        int result = (int(x[0]-48)-1)*10;
        if (len==1){
            result+=1;
        }else if(len==2){
            result+=3;
        } else if(len==3){
            result+=6;
        }else{
            result+=10;
        }
        cout<<result<<"\n";
    }
}