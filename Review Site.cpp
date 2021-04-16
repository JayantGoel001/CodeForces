#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int x;
        int upVote=0,downVote=0;
        for (int i = 0; i < n; ++i) {
            cin>>x;
            if (x==1){
                upVote++;
            } else if (x==2){
                downVote++;
            } else{
                upVote++;
            }
        }
        cout<<upVote<<"\n";
    }
}
