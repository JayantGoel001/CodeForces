#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int police=0;
    int crimes =0 ;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        if (x==-1){
            if(police==0){
                crimes++;
            }
            else{
                police--;
            }
        }else{
            police+=x;
        }
    }
    cout<<crimes;
}