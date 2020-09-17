#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        long long int a,b,n;
        cin>>a>>b>>n;
        int count = 0;
        if(b>a){
            a = a+b;
            b = a-b;
            a = a-b;
        }
        while (true){
            if(count%2!=0){
                a = a+b;
            }else{
                b = b+a;
            }
            count++;
            if (a>n || b>n){

                break;
            }
        }
        cout<<count<<"\n";

    }
}