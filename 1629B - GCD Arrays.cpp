#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l,r,k;
    cin>>l>>r>>k;
    if(l==r)
    {
    if(l>1)
       cout << "YES" << endl;
    else 
       cout << "NO" << endl;
    return;
    }
    int odd=(r-l+1)/2;
    if(l%2 && r%2)
           odd++;
    if(k>=odd)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
