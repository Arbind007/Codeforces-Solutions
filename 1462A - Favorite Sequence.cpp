#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(auto &i:v){
        cin >> i;
    }
    int i;
    for(i=0;i<n/2;i++){
        cout << v[i] << " ";
        cout << v[n-i-1] << " ";
    }
    if(n%2){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
