#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int *ar = new int[5];
    ar[0]=-1;
    cin>>ar[1]>>ar[2]>>ar[3]>>ar[4];
    sort(ar,ar+5);
    if(ar[1]+ar[4] == ar[2]+ar[3]){
        cout<<"YES";
    }else if(ar[1]+ar[2]+ar[3]==ar[4]){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
