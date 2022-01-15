#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans = 0;
    ans += sqrt(n);
    ans += cbrt(n);
    ans -= floor(sqrt(cbrt(n)));
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
