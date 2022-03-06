#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, h = 1;
    cin >> n >> m;
    h = 1;
    while (h <= m) {
        m = m - h;
        h++;
        if (h == n + 1) {
            h = 1;
        }
    }
    cout << m;
    return 0;
}
