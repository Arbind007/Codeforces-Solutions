#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,count=0,ans=0;
    cin >> n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i] > (i+1))
            count = arr[i] - (i+1),ans = max(count,ans);
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
