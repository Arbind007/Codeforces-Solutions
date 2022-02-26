#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int  m, num,t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> num;
        cin >> a >> b;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < a; ++i) {
            cin >> m;
            sum1 = max(sum1, m);
        }
        for (int i = 0; i < b; ++i) {
            cin >> m;
            sum2 = max(sum2, m);
        }
        if(sum1 > sum2) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}
