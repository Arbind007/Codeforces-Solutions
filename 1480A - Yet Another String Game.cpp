#include <bits/stdc++.h>
using namespace std;
void solve (){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(s[i]=='a') 
                s[i]='b';
            else 
                s[i]='a';
        }
        else{
            if(s[i]=='z') 
                s[i]='y';
            else 
                s[i]='z';
        }
    }
    cout<<s<<"\n";
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;
}
