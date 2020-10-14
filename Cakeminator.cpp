#include <iostream>
#include <memory.h>

using namespace std;
bool containsStrawberry(char **grid,int x,int rc,int type){
    if (type==0){
        for (int i = 0; i < rc; ++i) {
            if (grid[x][i]=='S'){
                return true;
            }
        }
    }else{
        for (int i = 0; i < rc; ++i) {
            if (grid[i][x]=='S'){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int r,c;
    cin>>r>>c;
    char **grid = new char*[r];
    for (int i = 0; i < r; ++i) {
        grid[i] = new char [c];
    }
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin>>grid[i][j];
        }
    }
    bool visited[r][c];
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            visited[i][j] = false;
        }
    }
    int count=0;
    for (int i = 0; i < r; ++i) {
        if (!containsStrawberry(grid,i,c, 0)){
            for (int j = 0; j < c; ++j) {
                if (!visited[i][j]){
                    count++;
                }
                visited[i][j]= true;
            }
        }
    }
    for (int i = 0; i < c; ++i) {
        if (!containsStrawberry(grid,i,r, 1)){
            for (int j = 0; j < r; ++j) {
                if (!visited[j][i]){
                    count++;
                }
                visited[j][i]= true;
            }
        }
    }
    cout<<count;

}