#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, t, n;
    cin >> t;
    while (t--) {
        cin >> num;
        vector <int> v;
        for(int i=0;i<num;i++) {
            cin >> n;
            v.push_back(n);
        }

        sort(v.begin(), v.end());

        for (int i = num - 1; i >= 0 ; --i) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
