#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int x,y,a,b;
    cin >> x >> y >> a >> b;
    int n = y - x;
    int m = a + b;
    if(n % m == 0) 
        cout << n/m << endl;
    else 
        cout << -1 << endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
