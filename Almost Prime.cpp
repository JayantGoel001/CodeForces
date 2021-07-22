#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define int long long int
#define double double_t
#define INF 1e18
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}

int power(int x, int y, int MOD) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x) % MOD, y / 2, MOD) % MOD;
    } else {
        return (x * power((x * x) % MOD, (y - 1) / 2, MOD) % MOD) % MOD;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    while (t--) {
        int n;
        cin >> n;
        int TOT = 3000;
        bool isPrime[TOT+1];
        for (int i = 0; i < TOT; i++) {
            isPrime[i] = i%2;
        }
        isPrime[1] = false;
        isPrime[2] = true;
        for (int i = 2; i*i <=TOT; ++i) {
            if (isPrime[i]){
                for (int j = i*i; j <=TOT; j+= 2 * i) {
                    isPrime[j] = false;
                }
            }
        }
        vector<int> v;
        for (int i = 0; i <= TOT; ++i) {
            if (isPrime[i]){
                v.push_back(i);
            }
        }
        int count =0;
        for (int i = 1; i <= n; ++i) {
            int count2 = 0;
            for (int j = 0; j < n && j < v.size() && v[j] <= n; ++j) {
                if (i%v[j]==0){
                    count2++;
                }
            }
            if (count2 == 2){
                count++;
            }
        }
        cout<<count;
        cout << "\n";
    }
}