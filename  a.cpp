#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int w,h,n;
        cin>>w>>h>>n;
        int count = 1;
        while (true){
            if (w%2==0){
                w/=2;
                count*=2;
            } else if (h%2==0){
                h/=2;
                count*=2;
            } else{
                break;
            }
        }
        if (n<=count){
            cout<<"YES\n";
        } else{
            cout<<"NO\n";
        }
    }
}