#include <iostream>
#include <map>
using namespace std;
int main(){
    bool isPrime[51];
    for (int i = 0; i < 51; ++i) {
        isPrime[i]= true;
    }
    for (int i = 2; i*i < 51; ++i) {
        for (int j = i*i; j <51 ; j+=i) {
            isPrime[j]= false;
        }
    }
    map<int,int> m;
    for (int i = 2; i <= 50; ++i) {
        if (isPrime[i]){
            int j;
            for (j = i+1; j <=50 ; ++j) {
                if (isPrime[j]){
                   m.insert(make_pair(i,j));
                   break;
                }
            }
        }
    }
    int x,y;
    cin>>x>>y;
    if (m[x]==y){
        cout<<"YES";
    } else{
        cout<<"NO";
    }

}