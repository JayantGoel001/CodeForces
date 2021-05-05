#include <iostream>
#include <valarray>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        int base = 1;
        int result = 0;
        int target;
        for (int i = 10; i <=n ; i*=10) {
            target = i-1;
            result+=target/base;
            base = base*10+1;
        }
        result += n/base;
        cout<<result<<"\n";
    }
}
