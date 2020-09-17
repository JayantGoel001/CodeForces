#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int *ar = new long long int[3];
        ar[0] = a;
        ar[1] = b;
        ar[2] = c;
        sort(ar,ar+3);
        a = ar[0];
        b = ar[1];
        c = ar[2];

        long long int x = (a+b) - 2*min(a,b);
        long  long  int  output =(c>=x)? (max(a,b) + (c-x)/2) : (min(a,b)+c);
        cout<<output<<"\n";
    }
}