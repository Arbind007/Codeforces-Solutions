#include <bits/stdc++.h>
using namespace std;
 
int main() {
     string s="abcdefghijklmnopqrstuvwxyz";
     string ans="";
     int n,k;
     cin>>n>>k;
     for(int i=0;i<n;i++)
         ans+=s[i%k];
     cout<<ans<<endl;
     return 0;
}
