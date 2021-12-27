#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    string s;
    cin>>s;
    int n=s.length();
    if(n%2 == 1)
        cout << "NO" << endl;
    else
    {
        string s1=s.substr(0,n/2);
        string s2=s.substr(n/2,n/2);
        if(s1==s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
 
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
