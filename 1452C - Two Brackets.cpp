#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int total=0;
    int t1=0;
    int t2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(')
            t1++;
        if(s[i]=='[')
            t2++;
        if(s[i]==']'){
            if(t2>0){
                total++;
                t2--;
            }
        }
        if(s[i]==')'){
            if(t1>0){
                total++;
                t1--;
            }
        }
    }
    cout<<total<<endl;    
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
