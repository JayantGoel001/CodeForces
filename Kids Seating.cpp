#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    bool isPrime[602];
    for (int i = 1; i <=601 ; ++i) {
        isPrime[i] = true;
    }
    for (int i = 2; i*i <=601 ; ++i) {
        for (int j = i*i; j <=601 ; j+=i) {
            isPrime[j]= false;
        }
    }
    vector<int> v;
    int count = 0;
    int i = 2;
    while (true){
        if (isPrime[i]){
            v.push_back(i);
            count++;
        }
        i++;
        if (count==100){
            break;
        }
    }
    for (i = 0; i < t; ++i) {
        int n;
        cin>>n;
        for (int j = 0; j < n; ++j) {
            cout<<v[j]*2<<" ";
        }
        cout<<"\n";
    }
}