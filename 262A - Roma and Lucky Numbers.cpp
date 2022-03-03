#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,k,ans=0;
    cin >> t >> k;
    while(t--){
        int m,cnt=0;
        cin >> m;
        string tmp = to_string(m);
        int n = tmp.length();
        for(int i=0;i<n;i++){
            if(tmp[i] == '4' || tmp[i] == '7')
                cnt++;
            if(cnt > k)
                continue; 
            if(i == n-1)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
