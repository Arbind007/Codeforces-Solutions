#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        if(n % 2050 != 0){
            cout << -1 << endl;
            continue;
        }
        n /= 2050;
        int ans = 0;
        while(n > 0){
            ans += (n%10);
            n /=10;
        }
        cout << ans << endl;
    }
    return 0;
}
