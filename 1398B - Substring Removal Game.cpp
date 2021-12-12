#include <bits/stdc++.h>
using namespace std;
 
 
void solve(){
    string s;
    cin>>s;
    s.push_back('0');
    vector<int>a;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')
            count++;
        else{
            a.push_back(count);
            count=0;
        }
    }
    sort(a.begin(),a.end(),greater <int> ());
    int total=0;
    for(int i=0;i<a.size();i++){
        if(i%2==0)
            total+=a[i];
    }
    cout<<total<<endl;
}
    
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    solve();
}
return 0;
}
