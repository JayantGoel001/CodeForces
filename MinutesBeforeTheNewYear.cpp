#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int totalMinutes = 24 * 60;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        int calMin = x*60 + y;
        cout<<totalMinutes-calMin<<endl;
    }
}


