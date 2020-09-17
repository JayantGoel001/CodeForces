#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int *ar = new int[3];
    cin>>ar[0]>>ar[1]>>ar[2];

    sort(ar,ar+3);

    if(ar[0]+ar[1]<ar[2]){
        cout<<(ar[0]+ar[1])*2;
    }else{
        cout<<(ar[0]+ar[1]+ar[2]);
    }
}