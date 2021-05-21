#include <iostream>
#include <algorithm>
#include <valarray>

#define int long long int
#define N 200005
#define Ai 1000001
using namespace std;
class Query{
public:
    int l;
    int r;
    int index;
};
int ar[N];
Query query[N];
int freq[Ai];
int BLOCK = 448;
int answer = 0;
int Output[N];
bool cmp(Query A,Query B){
    if (A.l/BLOCK!=B.l/BLOCK){
        return A.l/BLOCK<B.l/BLOCK;
    }
    if ((A.l/BLOCK)%2==0){
        return A.r<B.r;
    } else{
        return A.r>B.r;
    }
}
void add(int index){
    freq[ar[index]]++;
    answer += ar[index] * (2 * freq[ar[index]] - 1);
}
void remove(int index){
    freq[ar[index]]--;
    answer -= ar[index] * (2 * freq[ar[index]] + 1);
}
int32_t main(){
    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);

    int n,t;
    scanf("%I64d %I64d",&n,&t);
    BLOCK = ceil(sqrt(n));
    for (int i = 0; i < n; ++i) {
        scanf("%I64d",&ar[i]);
    }
    for (int i = 0; i < t; ++i) {
        scanf("%I64d %I64d",&query[i].l,&query[i].r);
        query[i].l-=1;
        query[i].r-=1;
        query[i].index = i;
    }
    sort(query,query+t,cmp);

    int currentL = 0;
    int currentR = 0;
    for (int i = 0; i < t; ++i) {
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
        Output[query[i].index] = answer;
    }
    for (int i = 0; i < t; ++i) {
        printf("%I64d\n",Output[i]);
    }
}