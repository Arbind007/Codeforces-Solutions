#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,count=0;
    bool flag = true;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=1;i<=n;i++){
        if(a[i-1]!=i){
            flag=false;
            break;
        }
    }
    if(flag == true){
        cout<<0<<endl;
        return;
    }
    if(a[0]==1 || a[n-1]==n){
        cout<<1<<endl;
    }
    else if(a[0]==n && a[n-1]==1){
        cout<<3<<endl;
    }
    else{
        cout<<2<<endl;
    }
}
 
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
