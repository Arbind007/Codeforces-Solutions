
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n,m,x;
    cin>>n>>m>>x;
    long long a=(x-1)/n;
    long long b=(x-1)%n;
    long long ans=(b)*m + (a+1);
    cout<<ans<<endl;
}  
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
