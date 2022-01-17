#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector <int> v(n);
    int ans = 0;

    for(int i = 0; i < n; i++) 
        cin >> v[i];

    while(ans < t - 1) 
        ans += v[ans];

    if(ans == t - 1) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}
