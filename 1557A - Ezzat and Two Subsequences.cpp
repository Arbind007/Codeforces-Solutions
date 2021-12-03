#include <bits/stdc++.h>
using namespace std;

double helper(int n){
    int a[n];
    for (int i = 0; i < n; i++)
    {
            cin >> a[i];
    }
    sort(a, a + n);
    double ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans += a[i];
    }
    ans /= n - 1;
    return ans += a[n - 1];
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << fixed << showpoint << setprecision(8) << helper(n) << endl;
    }
    return 0;
}
