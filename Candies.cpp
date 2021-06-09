#include<bits/stdc++.h>
#define int long long int
using namespace std;
int power(int x,int y){
    if (y==0){
        return 1;
    }
    if (y%2==0){
        return power(x*x,y/2);
    } else{
        return x * power(x*x,(y-1)/2);
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for (int k = 2; k <= ceil(log((double)n)/log(2.0)); ++k) {
            int sum = (power(2,k)-1);
            if ( n % sum == 0){
                cout<<n/sum<<"\n";
                break;
            }
        }
    }
}