#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, ans;
    cin >> n;
    ans = n * n / 2;
    if (n % 2 != 0) {
        ans++;
    }
    cout << ans << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % 2 != 0) {
                if (j % 2 != 0) {
                    cout << 'C';
                } else {
                    cout << '.';
                }
            } else {
                if (j % 2 == 0) {
                    cout << 'C';
                } else {
                    cout << '.';
                }
            }
        }
        cout << endl;
    }
}
