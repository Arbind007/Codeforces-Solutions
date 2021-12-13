#include <bits/stdc++.h>
using namespace std;

void solve(string s){
    deque<char>dq;
    char maxi='a';
    for(int i=0;i<s.size();i++){
        maxi=max(maxi,s[i]);
        dq.push_back(s[i]);
    } 
    if(dq.size() > maxi-96){
        cout<<"NO"<<endl;
        return;
    }
    for(char ch = maxi;ch>='a';ch--){
        if(dq.front() == ch) 
            dq.pop_front();
        else if(dq.back() == ch) 
            dq.pop_back();
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout << "YES" << endl;
}  
 
int main(){
int t=1;
cin>>t;
for(int i=0;i<t;i++){
    string s;
    cin >> s;
    solve(s);
}
return 0;
}
