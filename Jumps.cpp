#include <iostream>
#include <algorithm>
using namespace std;
int getsum(int x)
{
    return (x * (x + 1)) / 2;
}
int countJumps(int n)
{
    n = abs(n);
    int ans = 0;
    while (getsum(ans) < n or (getsum(ans) - n) & 1)
    {
        ans++;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int x;
        cin>>x;
        cout<<countJumps(x)<<'\n';
    }
}