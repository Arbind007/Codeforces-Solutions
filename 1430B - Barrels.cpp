#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1){
        cout<<0<<endl;
    }
    sort(a.begin(),a.end());
    for(int i=n-2;i>=0;i--){
        if(k){
            a[n-1]+=a[i];
            k--;
            a[i]=0;
        }
        else{
            break;
        }
    }
    sort(a.begin(),a.end());
    long long ans=a[n-1]-a[0];
    cout<<ans<<endl;    
}
 
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
