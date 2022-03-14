
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, s[100001] = {0}, c, t = 0, m = 0;
    cin >> n;
    n *= 2;
    while (n--) {
        cin >> c;
        if (s[c]) {
            --t;
            --s[c];
        } else {
            ++t;
            ++s[c];
        }
        if (m < t)
            m = t;
    }
    cout << m << endl;
    return 0;
}
