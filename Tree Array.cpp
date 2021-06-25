#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define int long long int
#define INF 1e18
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int power(int x, int y, int MOD = INF) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x) % MOD, y / 2) % MOD;
    } else {
        return (x * power((x * x) % MOD, (y - 1) / 2) % MOD) % MOD;
    }
}
int merge(vector<int> &arr, int temp[], int left, int mid,int right){
    int i, j, k;
    int inv_count = 0;
    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];
    return inv_count;
}
int _mergeSort(vector<int> &arr, int temp[], int left, int right){
    int mid, inv_count = 0;
    if (right > left) {
        mid = (right + left) / 2;
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

int mergeSort(vector<int> &v){
    int temp[v.size()];
    return _mergeSort(v, temp, 0, v.size() - 1);
}
void DFS(int x,vector<int> *adj,vector<int> &v,vector<bool> &isVisited){
    isVisited[x] = true;
    v.push_back(x);
    for(auto it:adj[x]){
        if(!isVisited[it]){
            DFS(it,adj,v,isVisited);
        }
    }
}
int32_t main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
    int t = 1;
    cin >> t;
    int MOD = power(10, 9) + 7;
    vector<int> adj[t+1];
    while (t--!=1) {
        int u,v;
        cin >> u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> v;
    vector<bool> isVisited(t+1);
    for (int i = 0; i <= t; ++i) {
        isVisited[i] = false;
    }
    DFS(1,adj,v,isVisited);
    int invCount = mergeSort(v);
    for (int i = 0; i < v.size(); ++i) {
        cout<<v[i]<<" ";
    }
    cout<<invCount * power(t,MOD-2,MOD)<<"\n";
}