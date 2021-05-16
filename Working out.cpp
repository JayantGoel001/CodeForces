#include <iostream>
#define int long long int
using namespace std;
int32_t main(){
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>ar[i][j];
        }
    }
    int start_boy[n+2][m+2];
    int start_girl[n+2][m+2];
    int end_boy[n+2][m+2];
    int end_girl[n+2][m+2];

    for (int i = 0; i <= n+1; ++i) {
        for (int j = 0; j <=m+1; ++j) {
            start_boy[i][j] = 0;
            start_girl[i][j] = 0;
            end_boy[i][j] = 0;
            end_girl[i][j] = 0;
        }
    }

    for (int i = 1; i <=n; ++i) {
        for (int j = 1; j <=m; ++j) {
            start_boy[i][j] = ar[i-1][j-1] + max(start_boy[i-1][j],start_boy[i][j-1]);
        }
    }
    for (int i=n;i>=1;i--){
        for (int j=m;j>=1;j--){
            end_boy[i][j] = ar[i-1][j-1] + max(end_boy[i + 1][j], end_boy[i][j + 1]);
        }
    }
    for (int i = n; i >=1 ; --i) {
        for (int j = 1; j <=m ; ++j) {
            start_girl[i][j] = ar[i-1][j-1] + max(start_girl[i][j-1],start_girl[i+1][j]);
        }
    }
    for (int i = 1; i <=n; ++i) {
        for (int j = m; j >=1 ; --j) {
            end_girl[i][j] = ar[i-1][j-1] + max(end_girl[i-1][j],end_girl[i][j+1]);
        }
    }
    int answer = 0;
    for (int i = 1; i <=n; ++i) {
        for (int j = 1; j <=m ; ++j) {
            int x1 = start_boy[i-1][j] + end_boy[i+1][j] + start_girl[i][j-1] + end_girl[i][j+1];
            int x2 = start_boy[i][j-1] + end_boy[i][j+1] + start_girl[i+1][j] + end_girl[i-1][j];
            answer = max(answer, max(x1,x2));
        }
    }
    cout<<answer<<"\n";
}