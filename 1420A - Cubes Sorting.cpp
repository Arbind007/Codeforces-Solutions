#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    int curr,prev,dump;
    cin >> prev;
    for(int i=0;i<n-1;i++){
        cin >> curr;
        if(prev > curr){
            prev = curr;
        }
        else{
            for(int j=i+1;j<n-1;j++){
                cin >> dump;
            }
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
 
int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}
