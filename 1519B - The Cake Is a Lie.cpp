#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>>a(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && j==0) 
                continue;
            if(i==0)
                a[i][j]=a[0][j-1]+1;
            else if(j==0) 
                a[i][j]=a[i-1][0]+1;
            else 
                a[i][j]=a[i-1][j]+(j+1);
        }
    }
    if(a[n-1][m-1]==k) 
        cout<<"YES"<<"\n";
    else 
        cout<<"NO"<<"\n";
}  
int main(){

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
        solve();
    
    return 0;
}
