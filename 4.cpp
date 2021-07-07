#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ar[n + 5];
        ar[0]=0;
        ar[1]=1;
        ar[2]=3;
        ar[3]=1;
        int count=k,sum= k + 1;
        for(int i=0;i<n;i++){
            if(i<=3){
                cout << ar[i] << endl;
            } else{
                int value=i;
                while(value % k == 0)
                    value/=k;
                if(value == 1){
                    count*=k;
                    sum+=count;
                    ar[i]=sum;
                    cout << ar[i] << endl;
                }
                else{
                    ar[i]=ar[i - count];
                    cout << ar[i] << endl;
                }
            }
            int x;
            cin>>x;
            if(x==1) {
                break;
            }
        }
    }
}