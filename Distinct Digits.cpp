#include <iostream>
#include <set>
using namespace std;
int main(){
    int l,r;
    cin>>l>>r;
    bool found = false;
    for (int i = l; i <=r; ++i) {
        int count =0;
        set<int> s;
        int num = i;
        while (num!=0){
            int x = num%10;
            s.insert(x);
            num/=10;
            count++;
        }
        if (count==s.size()){
            found=true;
            cout<<i;
            break;
        }
    }
    if (!found){
        cout<<"-1";
    }
}