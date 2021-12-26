#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin>>str;
    int n=0,m=0;
    unordered_map<char,int>ump;
    for(int i=0;i<str.length();i++)
    {
        ump[str[i]]++;
    }
    for(auto &a:ump)
    {
        if(a.second>1)
            m++;
        else if(a.second==1)
            n++;
    }
    cout<<m+n/2<<endl;
}

int main(){
    int n;
    cin >> n;
    while(n--)
        solve();
    return 0;
}
