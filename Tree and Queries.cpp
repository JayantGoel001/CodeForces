#include<iostream>
#include <vector>
#include <valarray>

#define int long long int
using namespace std;
class Query{
public:
    int l,r,index;
};
int BLOCK = 317;
bool cmp(Query A,Query B){
    if (A.l/BLOCK!=B.l/BLOCK){
        return A.l/BLOCK<B.l/BLOCK;
    }
    if ((A.l/BLOCK)%2==0){
        return A.r>B.r;
    } else{
        return A.r<B.r;
    }
}
const int N = 100001;
const int M = 100001;
int ar[N],freq[N];
vector<int> adj[N];
Query query[M];
int answer[N];
int id[N],nv[N],sub[N];
int currentID = 0;
void add(int current){
    ++freq[nv[current]];
    ++answer[freq[nv[current]]];
}
void remove(int current){
    --freq[nv[current]];
    --answer[freq[nv[current]]];
}

int DFS(int x,int fa){
    id[x] = ++currentID;
    nv[currentID] = ar[x];
    sub[x]=1;
    for (int i = 0; i < adj[x].size(); ++i) {
        if (adj[x][i]!=fa){
            sub[x]+=DFS(adj[x][i],x);
        }
    }
    return sub[x];
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    scanf("%I64d %I64d",&n,&m);
    BLOCK = ceil(sqrt(n));
    for (int i = 0; i < n; ++i) {
        scanf("%I64d",&ar[i]);
    }
    int u,v;
    for (int i = 0; i <n-1; ++i) {
        scanf("%I64d %I64d",&u,&v);
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    DFS(0,0);
    for (int i = 0; i < m; ++i) {
        scanf("%I64d %I64d",&u,&v);
        query[i].l = u-1;
        query[i].r = v-1;
        query[i].index = i;
    }
    sort(query,query+m,cmp);
    int currentL=0,currentR=0;
    int output[m];  
    for (int i = 0; i < m; ++i) {
        while (currentL<query[i].l){
            remove(currentL++);
        }
        while (currentL>query[i].l){
            add(--currentL);
        }
        while (currentR<=query[i].r){
            add(currentR++);
        }
        while (currentR>query[i].r+1){
            remove(--currentR);
        }
        output[query[i].index] = answer;
    }
    for (int i = 0; i < m; ++i) {
        printf("%I64d\n",output[i]);
    }
}
