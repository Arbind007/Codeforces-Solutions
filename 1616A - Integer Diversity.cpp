#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>=0)mp[x]++;
        else
        {
            x*=-1;
            mp[x]++;
        }
    }
    int c=0;
    for(auto &a:mp)
    {
        if(a.first==0)
            c++;
        else
        {
            if(a.second==1)
                c++;
            else if(a.second>1)
                c+=2;
        }
    }
    cout<<c<<endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
