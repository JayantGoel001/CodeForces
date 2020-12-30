#include<iostream>
#include <set>
#include <cmath>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        float ar[n];
        for (int j = 0; j < n; ++j) {
            cin>>ar[j];
        }
        set<float> st;
        for (int j = 0; j < n; ++j) {
            for (int k = j+1; k < n; ++k) {
                float a = sqrt(1+pow(ar[j],2));
                float b = sqrt(1+pow(ar[k],2));
                float c = abs(ar[j]-ar[k]);
                float s = (a+b+c)/2;
                float areaSquare = round(s*(s-a)*(s-b)*(s-c)*100);
                st.insert(areaSquare);
            }
        }
        cout<<st.size()<<"\n";
    }
}