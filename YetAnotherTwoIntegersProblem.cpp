#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        long long int a,b;
        cin>>a>>b;
        long long int x = abs(a-b);
        long long int count = 0;
        if (x%10!=0){
            count++;
        }
        count += (x/10);
        cout<<count<<"\n";
    }
}