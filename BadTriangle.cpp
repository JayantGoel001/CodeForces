#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        long long int *ar = new long long int[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        long long int a = ar[0];
        long long int b = ar[1];
        for (int j = 2; j < n; ++j) {
            long long int c = ar[j];
            if(a+b<=c){
                cout<<"1 2 "<<(j+1)<<"\n";
                break;
            }
            if (a+b>ar[n-1]){
                cout<<"-1\n";
                break;
            }
        }
    }
}