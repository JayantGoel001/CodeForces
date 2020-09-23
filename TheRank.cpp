#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    int *sumArray = new int[n];
    for (int i = 0; i < n; ++i) {
        int sum=0;
        for (int j = 0; j < 4; ++j) {
            int x;
            cin>>x;
            sum+=x;
        }
        sumArray[i]=sum;
    }
    int thomasScore = sumArray[0];
    sort(sumArray,sumArray+n,greater<int>());
    for (int i = 0; i < n; ++i) {
        if (sumArray[i]==thomasScore){
            cout<<i+1;
            break;
        }
    }

}