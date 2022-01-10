#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int a,b,n,S;
    cin >> a >> b >> n >> S;
    if(a*n + b < S){
        cout << "NO" << endl;
        return;
    } 
    int temp = S % n;
    if(temp > b){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
