#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,d;
    cin>>a>>b;
    if(a<b)
        swap(a,b);
    d=a-b;
    if(!a && !b)
        cout <<"0" << endl;
    else if(d%2)
        cout <<"-1" << endl;
    else if(!d)
        cout <<"1" << endl;
    else 
        cout <<"2" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
