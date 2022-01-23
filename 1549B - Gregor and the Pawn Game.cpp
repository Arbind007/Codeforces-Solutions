#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
        string a, b;
        cin >> n >> a >> b;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '1' && a[i] == '0')
            {
                ans++;
                b[i] = '0';
            }
        }
 
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '0')
            {
                continue;
            }
 
            if (i != 0 && a[i - 1] == '1')
            {
                ans++;
                a[i - 1] = '0';
                b[i] = '0';
            }
            else if (i != n - 1 && a[i + 1] == '1')
            {
                ans++;
                a[i + 1] = '0';
                b[i] = '0';
            }
        }
 
        cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve() ;
    }
    return 0;
}
