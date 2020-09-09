#include <iostream>

bool isColored(char i);

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char ar[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>ar[i][j];
        }
    }
    bool colored = false;
    for (int i = 0; i <n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(isColored(ar[i][j])){
                colored = true;
                cout<<"#Color\n";
                break;
            }
        }
        if (colored){
            break;
        }
    }
    if (!colored){
        cout<<"#Black&White"<<"\n";
    }

}

bool isColored(char i) {
    if (i=='C' || i=='M'|| i =='Y'){
        return true;
    }
    return false;
}
