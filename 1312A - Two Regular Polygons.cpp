#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    int n,m;
    cin>>n>>m;
    if(n % m == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}  
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}
