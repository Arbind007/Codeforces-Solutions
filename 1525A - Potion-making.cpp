#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int k;
    cin>>k;
    int a=k;
    int b=100-k;
    int c=__gcd(a,b);
    a/=c;
    b/=c;
    cout<<a+b<<endl;
}  
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)  
        solve();
    return 0;
}
 
