#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    b*=2;
    a+=c;
    int d=abs(a-b);
    if(d%3==0)
        cout<< "0" << endl;
    else
        cout<< "1" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
