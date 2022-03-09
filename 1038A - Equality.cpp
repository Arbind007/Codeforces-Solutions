#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k,ans=1<<30;
    string s;
    unordered_map <char,int> m;
    cin >> n >> k >> s;
    for(int i=0;i<n;i++)
        m[s[i]]++;
    for(char c='A'; c<'A'+k;c++)
        ans=min(m[c],ans);
    cout << ans*k << endl;
    return 0;
}
