#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(101);
    for(int i=0;i<n;i++) 
        cin>>a[i],b[a[i]]++;
    for(int i=0;i<=100;i++){
        if(b[i]>0){
            cout<<i<<" ";
            b[i]--;
        }
    }
    for(int i=0;i<=100;i++)
        for(int j=0;j<b[i];j++)
            cout<<i<<" ";
    cout<<endl;
}
                
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
