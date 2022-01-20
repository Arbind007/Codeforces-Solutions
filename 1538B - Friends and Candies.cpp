#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,sum = 0;
    cin >> n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
        sum += v[i];
    }
    if(sum % n){
        cout << "-1" << endl;
        return;
    }
    int temp = sum/n;
    sum = 0;
    for(int i=0;i<n;i++){
        if(temp < v[i])
            sum++;
    }
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
