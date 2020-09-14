#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        int *ar= new int[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
            ar[j]%=2;
        }
        int count= 0;
        int uniSum =0 ;
        for (int j = 0; j < n; ++j) {
            if (j%2!=ar[j]){
                count++;
                if(j%2==0){
                    uniSum+=1;
                }else{
                    uniSum-=1;
                }
            }
        }
        if (uniSum==0) {
            if (count % 2 == 0) {
                cout << count / 2 << "\n";
            } else {
                cout << "-1\n";
            }
        }
        else{
            cout<<"-1\n";
        }
    }
}