#include <iostream>
using namespace std;
class Chapter{
public:
    int l;
    int r;
    Chapter(){
        l=0;
        r=0;
    }

};
int main(){
    int t;
    cin>>t;
    Chapter *chapter = new Chapter[t];
    for (int i = 0; i < t; ++i) {
        int l,r;
        cin>>l>>r;
        chapter[i].l = l;
        chapter[i].r = r;
    }
    int k;
    cin>>k;
    int i=0;
    for ( ; i < t; ++i) {
        if(k>=chapter[i].l && chapter[i].r>=k){
            break;
        }
    }
    cout<<t-i;
}