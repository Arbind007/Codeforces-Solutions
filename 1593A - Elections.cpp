#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll helper(ll a, ll b, ll c){
    ll d = a;
    a+=max(0ll,b-a+1);
    a+=max(0ll,c-a+1);
    return a - d;
}


int main(){
    ll n;
    cin >> n;
    while(n--){
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<helper(a,b,c)<<" ";
    cout<<helper(b,a,c)<<" ";
    cout<<helper(c,b,a)<<" "<<endl;
    }
    return 0;
}
