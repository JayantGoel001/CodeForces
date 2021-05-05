#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        if (n==1){
            cout<<"1\n";
        } else if (n==2){
            cout<<"-1\n";
        } else if (n==3){
            cout<<"2 9 7\n4 6 3\n1 8 5\n";
        }else{
            int k = 1;
            int l ;
            if (n%2!=0) {
                l = (n / 2 + 1) * n + 1;
            } else{
                l = (n*n)/2+1;
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (j%2==0){
                        cout<<k++<<" ";
                    } else{
                        cout<<l++<<" ";
                    }
                }
                cout<<"\n";
            }
        }

    }
}