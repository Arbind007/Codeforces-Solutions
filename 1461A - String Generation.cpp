#include <bits/stdc++.h>
using namespace std;

string solve(){
    int n,k;
    cin>>n>>k;
    string ans="";
    for(int i=0;i<k;i++)
        ans+='a';
    string temp="bca";
    int x=0;
    for(int i=k;i<n;i++){
        ans+=temp[x];
        x++;
        x%=3;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        cout << solve() << endl;
    return 0;    
}
